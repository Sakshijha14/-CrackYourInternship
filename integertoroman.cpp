// DAY12question3
//https://leetcode.com/problems/integer-to-roman/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>>numerical={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{8,"VIII"},{7,"VII"},{6,"VI"},{5,"V"},{4,"IV"},{3,"III"},{2,"II"},{1,"I"}};
        string output="";
        while(num>0){
            for(auto it:numerical){
                if(num>=it.first){
                    output+=it.second;
                    num=num-it.first;
                    break;
                }
            }
        }
    return output;
    }
};