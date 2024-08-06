// DAY23question2
//https://leetcode.com/problems/permutations-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

void nextelement(vector<int>&nums,vector<vector<int>>&output,int start){

    if(start==nums.size()){
        output.push_back(nums);
        return ;
    }
    set<int>seen;
    for(int i=start;i<nums.size();i++){
        if(seen.find(nums[i])!=seen.end()){
            continue;
        }

        seen.insert(nums[i]);
        swap(nums[start],nums[i]);
        nextelement(nums,output,start+1);
        swap(nums[start],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>>output;
        sort(nums.begin(),nums.end());
        nextelement(nums,output,0);
        return output;
        
    }
};