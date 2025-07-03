#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& numbers, int target){ 
            int pointer1, pointer2, sum;
            vector<int> result;

            pointer1 = 0;
            pointer2 = size(numbers)-1;

            while(pointer2 > pointer1){
                sum = numbers.at(pointer1) + numbers.at(pointer2);
                if (sum==target){
                    result = {pointer1+1, pointer2+1};
                    break;
                }
                else if (sum > target){
                    pointer2--;
                }
                else if (sum < target){
                    pointer2++;
                }
            }

            return result;
        }
};
int main(){
    vector<int> numbers = {2,3,4}; 
    int target = 6;

    Solution sol;

    vector<int> result = sol.twoSum(numbers, target);
    for (int i : result)
        cout << i << " ";
    cout << endl;
}
