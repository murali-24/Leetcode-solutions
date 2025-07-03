#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        vector<vector<int>> threeSum(vector<int>& nums){
            int pointer2, pointer3,length,sum;
            length = size(nums);
            vector<vector<int>> result = {};
            sort(nums.begin(), nums.end());

            for (int pointer1=0; pointer1<length-2; pointer1++){
                if (pointer1 > 0 && nums[pointer1] == nums[pointer1-1]){
                    continue;
                }
                pointer2 = pointer1+1;
                pointer3 = length - 1;
                while (pointer2 < pointer3){
                    sum = nums[pointer1]+nums[pointer2]+nums[pointer3];

                    if (sum == 0){
                        vector<int> triplet = {nums[pointer1],nums[pointer2],nums[pointer3]};
                        while (pointer2 < pointer3 && nums[pointer2] == nums[pointer2+1])
                            pointer2++;
                        while (pointer2 < pointer3 && nums[pointer3] == nums[pointer3-1])
                            pointer3--;
                        result.push_back(triplet);
                        pointer2++;
                        pointer3--;
                    }
                    else if (sum < 0){
                        pointer2++;
                    }
                    else if (sum > 0){
                        pointer3--;
                    }
                }
            }
        return result;
        }
};

int main(){
    Solution sol;
    vector<int> nums = {0,0,0};
    vector<vector<int>> result = sol.threeSum(nums);

    for (vector<int> triplet: result){
        for (int num: triplet){
            cout<<num<<" ";
        }
        cout<<endl;
    }


}
