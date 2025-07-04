#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int removeElement(vector<int>& nums, int val){
            int i, x=0, k=0;
            int length = size(nums);

            for (i=0; i<length; i++){
                if (nums[i] != val){
                    nums[x] = nums[i];
                    x++;
                }
                else{
                    k++;
                }
            }
            return length-k;
        }
};

int main(){
    Solution sol;
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val = 2;

    int result = sol.removeElement(nums, val);
    for (int i: nums)
        cout<<i<<" ";
cout<<"\n"<<result;
}