// DAY25question4
//https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        
        
        int maxlength=0;
        int sum=0;
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxlength=i+1;
            }
            else{
                if(mp.find(sum)!=mp.end()){
                    maxlength=max(maxlength,i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }
        }
        return maxlength;
    }
};