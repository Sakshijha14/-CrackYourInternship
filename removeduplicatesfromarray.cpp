// DAY10
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        int index=0;
        for(auto it:s){
            nums[index]=it;
            index++;
        }
        return index;        
    }
};