// DAYquestion4
//https://leetcode.com/problems/backspace-string-compare/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>strings;
        stack<char>stringt;

        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!strings.empty()){
                    strings.pop();
                }
            }
            else{
                strings.push(s[i]);
            }
            
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(!stringt.empty()){
                    stringt.pop();
                }
            }
            else{
                 stringt.push(t[i]);
            }    
        }

        while(!strings.empty() && !stringt.empty()){
            if(strings.top()!=stringt.top()){
                return false;
            }
            strings.pop();
            stringt.pop();
        }
        return strings.empty() && stringt.empty();
    }
};