#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int minSubArrayLen(int target, vector<int>& nums){
            int currentSum=0, minLength=0, start=0, end=0, currentLength=0;
            int length = size(nums);

            int count;
            while (end<length+1){
                if (currentSum >= target){
                    if (minLength==0 || currentLength < minLength){
                        minLength=currentLength;
                    }
                    currentSum -= nums[start];
                    start++;
                    currentLength--;
                    continue;
                }
                else{
                    if (end == length) break;
                    currentSum += nums[end];
                    currentLength++;
                    end++;

                }
            }
            return minLength;
        }
};

int main(){
    Solution sol;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;

    int minimumLength = sol.minSubArrayLen(target, nums);
    cout<<"Minimum Length: "<<minimumLength;
}