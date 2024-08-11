// DAY28question5
//https://leetcode.com/problems/generate-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

vector<string>output;

void paranthesis(string &element,int n,int open,int close){

    if(element.length()==2*n){
        output.push_back(element);
        return ;
    }

    if(open<n){
        element.push_back('(');
        paranthesis(element,n,open+1,close);
        element.pop_back();
    }

    if(close<open){
        element.push_back(')');
        paranthesis(element,n,open,close+1);
        element.pop_back();
    }
}

    vector<string> generateParenthesis(int n) {
        
        string element="";
        int open=0;
        int close=0;
        paranthesis(element,n,open,close);
        return output;
    }
};