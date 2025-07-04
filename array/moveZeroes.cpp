#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> moveZeroes(vector<int>& nums){
            int length, nonZeroPointer, zeroPointer,temp;
            length = size(nums);

            nonZeroPointer = 0;
            zeroPointer = 0;

            if (length<2){
                return nums;
            }

            while (nonZeroPointer < length){
                if (isZero(nums[zeroPointer]) && !isZero(nums[nonZeroPointer])){
                    temp = nums[zeroPointer];
                    nums[zeroPointer] = nums[nonZeroPointer];
                    nums[nonZeroPointer] = temp;
                    nonZeroPointer++;
                    zeroPointer++;
                }
                if(zeroPointer < length && !isZero(nums[zeroPointer])){
                    zeroPointer++;
                }
                if (nonZeroPointer < length && (isZero(nums[nonZeroPointer])|| nonZeroPointer < zeroPointer)){
                    nonZeroPointer++;
                }
            }
            return nums;
        }

        bool isZero(int num){
            if (num==0){
                return true;
            }
            return false;
        }
};

int main(){
    Solution sol;
    vector<int> nums={1,0};

    vector<int> result = sol.moveZeroes(nums);

    for (int i: nums){
        cout<<i<<" ";
    }
}