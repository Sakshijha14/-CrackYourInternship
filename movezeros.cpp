// DAY7question5
//https://leetcode.com/problems/move-zeroes/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int n=nums.size();

        for(int right=0;right<n;right++){
            if(nums[right]!=0){
                swap(nums[right],nums[left]);
                left++;
            }
        }
    }
};