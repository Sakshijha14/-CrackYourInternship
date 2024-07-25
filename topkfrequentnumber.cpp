// DAY12question4
//https://leetcode.com/problems/top-k-frequent-elements/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>output;
        map<int,int>top; 

        for(int i=0;i<n;i++){
            top[nums[i]]++;
        }
        priority_queue<pair<int, int>> maxHeap;

        for (auto entry : top) {
            maxHeap.push({entry.second, entry.first});
        }

        for(int i=0;i<k;i++){
            output.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return output;
        
    }
};