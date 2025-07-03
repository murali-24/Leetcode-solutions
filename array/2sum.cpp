#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& numbers, int target){
            unordered_map<int,int> indices; 
            int pointer, number, difference, length;
            vector<int> result;

            pointer = 0;
            length = size(numbers) - 1;

            while (pointer <= length){
                number = numbers.at(pointer);
                difference = target-number;
                if (indices.count(difference)){
                    result = {indices[difference], pointer};
                    break;
                }
                indices.insert({number, pointer});
                pointer++;
            }
            
            // for (auto &pair : indices) {
            //     std::cout << pair.first << ": " << pair.second << "\n";
            // }
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
