#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int maxArea(vector<int>& height){
            int start, end, length, area, maxArea=0;

            length = size(height);
            start=0;
            end = length-1;

            while (start < end){
                area = (end-start) * min(height[start], height[end]);

                if (area > maxArea){
                    maxArea = area;
                }

                if (height[start] < height[end]){
                    start++;
                }
                else if (height[start] > height[end]){
                    end--;
                }
                else{
                    if (height[start+1] < height[end-1]){
                        start++;
                    }
                    else if (height[start] > height[end]){
                        end--;
                    }
                    else{
                        start++;
                        end--;
                    }
                }
            }
            return maxArea;
        }
};

int main(){
    vector <int> height = {1,1};
    Solution sol;
    int maxArea = sol.maxArea(height);
    cout<<"Max area is: "<<maxArea;
}