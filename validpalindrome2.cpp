// DAY23question8
//https://leetcode.com/problems/valid-palindrome-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int isvalid(string s,int i,int j){

    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {

        int i=0;
        int j=s.length()-1;
        while(i<=j){

            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return isvalid(s,i+1,j) || isvalid(s,i,j-1);
            }
        }
        return true;   
    }
};