// DAY8question4
//https://leetcode.com/problems/subarray-sums-divisible-by-k/


#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int result=0;
        int store=0;

       vector<int>mp(k);
       mp[0]=1;

       for(int i=0;i<nums.size();i++){
        store=(store+nums[i]%k+k)%k;
        result+=mp[store];

        mp[store]++;

       }
       return result;
    }
};

