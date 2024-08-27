// DAY45
//https://leetcode.com/problems/find-the-most-competitive-subsequence/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>store;

        for(int i=0;i<nums.size();i++){
            while(store.size()!=0 && store.size()+nums.size()-i-1>=k && nums[i]<store.top())
            store.pop();

            if(store.size()<k)
            store.push(nums[i]);
        }
        vector<int>output;
        while(store.size()!=0){
            output.push_back(store.top());
            store.pop();
        }
        reverse(output.begin(),output.end());

        return output;
    }
};