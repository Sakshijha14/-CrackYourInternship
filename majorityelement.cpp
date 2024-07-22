//DAY9question5
//https://leetcode.com/problems/majority-element/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int element=0;

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>(n/2)){
                element= it.first;
            }
        }
        return element;
    }
};