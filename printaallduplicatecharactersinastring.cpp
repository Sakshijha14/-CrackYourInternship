//DAY9
//https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/


#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string str){

    unordered_map<char,int>mp;

    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }

    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<" "<<it.second;
        }
    }
}

