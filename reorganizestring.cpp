// DAY25question3
//https://leetcode.com/problems/reorganize-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        
        unordered_map<char,int>frequency;
        for(char c:s){
            frequency[c]++;
        }
        priority_queue<pair<int,char>>maxHeap;
        for(auto& frequencies:frequency){
            maxHeap.push({frequencies.second,frequencies.first});
        }

        string output;
        pair<int,char>prevChar={-1,'#'};
        //if frequency is greater than 0 then push back to heap
        //move to next element in order 
        while(!maxHeap.empty()){
            auto current=maxHeap.top();
            maxHeap.pop();

            output+=current.second;

            if(prevChar.first>0){
                maxHeap.push(prevChar);
            }
            current.first--;
            prevChar=current;
        }
        if(output.length()==s.length()){
            return output;
        }
        else{
            return "";
        }
    }
};