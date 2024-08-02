// DAY19question2
//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        
        
        for (int i = 0; i < n; i++) {
            total += cardPoints[i];
        }

        
        if (k == n) {
            return total;
        }
        
        
        int subarraySum = 0;
        for (int i = 0; i < n - k; i++) {
            subarraySum += cardPoints[i];
        }

        int minSubarraySum = subarraySum;

        
        for (int i = n - k; i < n; i++) {
            subarraySum += cardPoints[i] - cardPoints[i - (n - k)];
            minSubarraySum = min(minSubarraySum, subarraySum);
        }
        int output = total - minSubarraySum;
        return output;
    }
};
