// DAY13question2
//https://leetcode.com/problems/ugly-number-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {

        if(n==1){
            return 1;
        }
        
        priority_queue<long long int,vector<long long int>,greater<long long int>>miniheap;
        miniheap.push(2);
        miniheap.push(3);
        miniheap.push(5);

        set<long long int>s;
        s.insert(2);
        s.insert(3);
        s.insert(5);

        for(int i=2;i<n;i++){
            long long int number=miniheap.top();
            miniheap.pop();
            if(number>INT_MAX){
                continue;
            }

            if(s.find(number*2)==s.end()){
                s.insert(number*2);
                miniheap.push(number*2);
            }
            if(s.find(number*3)==s.end()){
                s.insert(number*3);
                miniheap.push(number*3);
            }
            if(s.find(number*5)==s.end()){
                s.insert(number*5);
                miniheap.push(number*5);
            }

        }

    return miniheap.top();    

    }
};