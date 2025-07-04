#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution{
    public:
        string reverseVowels(string s){
            int length, ptr1, ptr2;
            unordered_set<int> vowels = {'a','e','i','o','u','A','E','I','O','U'};

            length = s.length();

            ptr1 = 0;
            ptr2 = length-1;

            while (ptr1 < ptr2){
                char first = s.at(ptr1);
                char last = s.at(ptr2);

                if ((vowels.find(first) != vowels.end()) && (vowels.find(last) != vowels.end())){
                    char temp;
                    temp = s.at(ptr1);
                    s.at(ptr1) = s.at(ptr2);
                    s.at(ptr2)=temp;
                    ptr1++; ptr2--;
                }
                else if (vowels.find(first) == vowels.end() && ptr1 < length){
                    ptr1++;
                }
                else if (vowels.find(last) == vowels.end() && ptr2 > 0){
                    ptr2--;
                }
            }
            return s;
        }
};

int main(){
    Solution sol;
    string s = "leetcode";
    string result = sol.reverseVowels(s);
    cout<<"Reversed String: "<<result;
}