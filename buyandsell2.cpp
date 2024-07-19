// DAY6
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/1325923795/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int start=prices[0];
        for(int i=1;i<n;i++){
            if(start<prices[i]){
                maxprofit+=prices[i]-start;
            }
            start=prices[i];
        }
        return maxprofit;
        
    }
};