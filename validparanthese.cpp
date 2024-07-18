// DAY5question2
//https://leetcode.com/problems/valid-parentheses/submissions/1324851741/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.size() &&((st.top()=='('&& s[i]==')')||(st.top()=='{'&& s[i]=='}')||(st.top()=='['&& s[i]==']'))){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
           
        }
         if(st.empty()){
                return true;
            }
        return false;
    }
};