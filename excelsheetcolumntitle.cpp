// DAY38
//https://leetcode.com/problems/excel-sheet-column-title/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string output="";
        while(columnNumber>0){
            columnNumber--;
            int a=columnNumber%26;
            output=output+char('A'+a);
            columnNumber/=26;
        }
        reverse(output.begin(),output.end());
        return output;
    }
};