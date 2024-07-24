// DAY11question9
//https://leetcode.com/problems/daily-temperatures/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        
        vector<int>output(n,0);
        stack<int>st;

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int diff=st.top();
                output[diff]=(i-diff);//when temp string has greater than stack insert in
               st.pop();
            }
            st.push(i);//store index of temperature that contradicts
        }

        return output;
    }
};
