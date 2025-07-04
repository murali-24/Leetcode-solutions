#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
        vector<int> sortedSquares(vector<int>& nums){
            int start, end, length;

            start = 0; length = size(nums); end = length-1;

            vector<int> squaredNums = {};

            while (start<end){
                if (abs(nums[start]) > abs(nums[end])){
                    squaredNums.push_back(nums[start]*nums[start]);
                    start++;
                }
                else {
                    squaredNums.push_back(nums[end]*nums[end]);
                    end--;
                }
                
            }
            squaredNums.push_back(nums[start]*nums[start]);
            reverse(squaredNums.begin(), squaredNums.end());
            return squaredNums;
        }
};

int main(){
    Solution sol;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = sol.sortedSquares(nums);

    for (int num: result){
        cout<<num<<" ";
    }
}