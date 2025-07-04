#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> moveZeroes(vector<int>& nums){
            int i, x=0, count=0;
            int length = size(nums);

            for (i=0; i<length; i++){
                if (nums[i] != 0){
                    nums[x] = nums[i];
                    x++;
                }
                else{
                    count++;
                }
            }
            for (i=0; i<count; i++){
                nums[x] = 0;
                x++;

            }
        return nums;
        }
};

int main(){
    Solution sol;
    vector<int> nums={0,1,0,3,12};

    vector<int> result = sol.moveZeroes(nums);

    for (int i: result){
        cout<<i<<" ";
    }
}