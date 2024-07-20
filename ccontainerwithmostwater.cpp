// DAY7question3
//https://leetcode.com/problems/container-with-most-water/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int maxArea=0;
        while(left<right){
            int heightneeded=min(height[left],height[right])*(right-left);
            maxArea=max(maxArea,heightneeded);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }

        return maxArea;
    }
};

