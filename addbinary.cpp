// DAY27
//https://leetcode.com/problems/add-binary/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        
        int carry=0;
        string output="";

        int rightmostofa=a.size()-1;
        int rightmostofb=b.size()-1;

        while(rightmostofa>=0 || rightmostofb>=0 || carry>0){
            int sum=carry;

            if(rightmostofa>=0){
                sum+=a[rightmostofa--]-'0';
            }
            if(rightmostofb>=0){
                sum+=b[rightmostofb--]-'0';
            }

            carry=sum/2;
            output=char(sum%2+'0')+output;
        }

        return output;
    }
};