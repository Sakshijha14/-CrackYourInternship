// DAY23
//https://leetcode.com/problems/combination-sum-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

void dfs(vector<int>&candidates,int target,int start,vector<int>&combination,vector<vector<int>>&output){

    int n=candidates.size();
    if(target<0){
        return ;
    }
    if(target==0){
        output.push_back(combination);
        return ;
    }
    for(int i=start;i<n;i++){
        if(i>start && candidates[i]==candidates[i-1]){
            continue;
        }
        if(candidates[i]>target){
            break;
        }

        combination.push_back(candidates[i]);
        dfs(candidates,target-candidates[i],i+1,combination,output);
        combination.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>output;

        vector<int>combination;
        dfs(candidates,target,0,combination,output);
        return output;
    }
};