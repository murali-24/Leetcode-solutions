#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

class Solution{
    public:
        bool isPalindrome(string s){
            int length,start,end;

            length = s.length();
            start=0; end=length-1;


            while(start<end){
                if (!isalnum(s.at(start))){
                    start++;
                }
                else if (!isalnum(s.at(end))){
                    end--;
                }
                else if (isalnum(s.at(start)) && isalnum(s.at(end))){
                    if (tolower(s.at(start)) == tolower(s.at(end))){
                        start++; 
                        end--; 
                    }
                
                    else{
                        return false;
                    }
                }
   
            }
            return true;
        }
};

int main(){
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    bool result = sol.isPalindrome(s);
    cout<<result;
}

//Efficient solution

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int i = 0, j = s.size() - 1;
//         while (i < j) {
//             while (i < j && !isalnum(s[i]))
//                 i++;
//             while (i < j && !isalnum(s[j]))
//                 j--;
//             if (tolower(s[i]) != tolower(s[j]))
//                 return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };