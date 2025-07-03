#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> sortArrayByParity(vector<int>& nums){
            int length, evenPointer, oddPointer,temp;
            length = size(nums);
            evenPointer = 0;
            oddPointer = length - 1;

            while (evenPointer < length-1 && oddPointer > 0){
                if (isEven(nums[oddPointer]) && !isEven(nums[evenPointer])){
                    temp = nums[oddPointer];
                    nums[oddPointer] = nums[evenPointer];
                    nums[evenPointer] = temp;
                    evenPointer+=2;
                    oddPointer-=2;
                    //cout<<"Even"<<nums[evenPointer]<<"odd"<<nums[oddPointer];
                }

                while (evenPointer < length-1 && isEven(nums[evenPointer])){
                    evenPointer+=2;
                }
                while (oddPointer > 0 && !isEven(nums[oddPointer])){
                    oddPointer-=2;
                }
            }
            return nums;
        }

        bool isEven(int num){
            if (num%2==0){
                return true;
            }
            return false;
        }
};

int main(){
    Solution sol;
    vector<int> nums={6,8,7,4,3,1,0,5};

    vector<int> result = sol.sortArrayByParity(nums);

    for (int i: nums){
        cout<<i<<" ";
    }
}