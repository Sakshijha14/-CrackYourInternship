// DAY12question2
//https://leetcode.com/problems/longest-common-prefix/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n=strs.size();
        string output="";

        sort(strs.begin(),strs.end());

        string s1=strs[0];
        string s2=strs[n-1];

        for(int i=0;i<s1.length();i++){
            if(s1[i]==s2[i]){
                output.push_back(s1[i]);
            }
            else{
                break;
            }

        }
        return output;
        
    }
};