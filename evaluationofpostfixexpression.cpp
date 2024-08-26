// DAY43
//https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int evaluatePostfix(string S)
    {
        
        stack<int> st;
        for(char c:S){
            if(isdigit(c)){
                st.push(c-'0');
            }
            else{
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                switch(c){
                    case '+':
                    st.push(x+y);
                    break;
                    case '-':
                    st.push(x-y);
                    break;
                    case '*':
                    st.push(x*y);
                    break;
                    case '/':
                    st.push(x/y);
                    break;
                }
            }
        }
        return st.top();
    }
};

