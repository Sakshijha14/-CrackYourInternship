// DAY13
//https://leetcode.com/problems/kth-largest-element-in-an-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>>miniheap(nums.begin(),nums.begin()+k);


        for(int i=k;i<nums.size();i++){
            if(nums[i]>miniheap.top()){
                miniheap.pop();
                miniheap.push(nums[i]);
            }
        }
        return miniheap.top();
    }
};