// DAY10question2
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int pricetopurchase=INT_MAX;
        int pricetosell=INT_MIN;

        for(int i=0;i<n;i++){
            pricetopurchase=min(pricetopurchase,prices[i]);
            pricetosell=max(pricetosell,prices[i]-pricetopurchase);
        }
        return pricetosell;
        
    }
};