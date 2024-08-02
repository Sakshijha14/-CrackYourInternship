// DAY19question3
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char,int>>st;
        string output="";

        for(int i=0;i<s.size();i++){
            if(st.empty() || s[i]!=st.top().first ){
                st.push({s[i],1});
            }
            else{
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }

            }

        }

        while(!st.empty()){
            output=string(st.top().second,st.top().first)+output;
            st.pop();
        }
        return output;
        
    }
};