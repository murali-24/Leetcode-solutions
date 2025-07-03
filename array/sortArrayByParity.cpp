#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> sortArrayByParity(vector<int>& nums){
            int length, evenPointer, oddPointer,temp;
            length = size(nums);
            if (length<=1){
                return nums;
            }
            evenPointer = 0;
            oddPointer = length - 1;

            while (evenPointer < oddPointer){
                if (isEven(nums[oddPointer]) && !isEven(nums[evenPointer])){
                    temp = nums[oddPointer];
                    nums[oddPointer] = nums[evenPointer];
                    nums[evenPointer] = temp;
                    evenPointer++;
                    oddPointer--;
                }

                while (evenPointer < oddPointer && isEven(nums[evenPointer])){
                    evenPointer++;
                }
                while (evenPointer < oddPointer && !isEven(nums[oddPointer])){
                    oddPointer--;
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
    vector<int> nums={6,8,3,2,1,4,5,7,0};

    vector<int> result = sol.sortArrayByParity(nums);

    for (int i: nums){
        cout<<i<<" ";
    }
}