#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution{
    public:
        int lengthOfLongestSubstring(string s){
            int maxLength=0,start=0,end=0;
            int length = s.length();
            unordered_set<char> characters;

            while (end < length){
                char currentChar = s.at(end);

                if (characters.count(currentChar)){
                        characters.erase(s.at(start));
                        start++;
                }
                else{
                    characters.insert(currentChar);
                    maxLength = max(maxLength, end-start+1);
                    end++;
                }
            }
            
            return maxLength;
        }
};

int main(){
    Solution sol;
    string s = "abcabcab";
    int longestSubstringLength = sol.lengthOfLongestSubstring(s);
    cout<<"The length of longest substring is: "<<longestSubstringLength; 
}