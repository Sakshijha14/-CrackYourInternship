// DAY26 
//https://leetcode.com/problems/online-stock-span/

#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:

vector<int>output;
    StockSpanner() {
        
    }
    
    int next(int price) {
        output.push_back(price);
        int count=1;
        for(int i=output.size()-2;i>=0;i--){
            if(output[i]<=price){\
            count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};