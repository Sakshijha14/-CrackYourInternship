// DAY23question6
//https://leetcode.com/problems/sum-of-subarray-minimums/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int MOD=1e9+7;

        int n=arr.size();
        vector<int>prev_smaller(n,-1);
        vector<int>next_smaller(n,n);

        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                prev_smaller[i]=st.top();
            }
            st.push(i);
        }

        while(st.size()){
            st.pop();
        }

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                next_smaller[i]=st.top();
            }
            st.push(i);
        }
        int output=0;
        for(int i=0;i<n;i++){
            int left_count=i-prev_smaller[i];
            int right_count=next_smaller[i]-i;
            output=(output+(long long)arr[i]*left_count*right_count)%MOD;
        }
        return (int)output;
        
    }
};