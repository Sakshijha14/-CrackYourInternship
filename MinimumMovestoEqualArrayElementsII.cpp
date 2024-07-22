//DAY9question3
//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        int result=0;
        for(int i=0;i<nums.size();i++){
            result+=abs(nums[i]-nums[mid]);
        }
        return result;
        
    }
};