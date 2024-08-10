// DAY27question5
//https://leetcode.com/problems/maximum-length-of-repeated-subarray/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();

        vector<vector<int>>dp=vector<vector<int>>(n,vector<int>(m,0));

        int output=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    if(i>0 && j>0){
                        dp[i][j]=1+dp[i-1][j-1];
                    }
                    else{
                        dp[i][j]=1;
                    }
                }
                output=max(output,dp[i][j]);
            }
        }
        return output;
    }
};