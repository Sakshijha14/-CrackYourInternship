// DAY25question2
//https://www.geeksforgeeks.org/problems/minimum-swaps/1

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    
	int minSwaps(vector<int>&nums)
	{
	    
	    vector<pair<int,int>>p;
	    int count=0;
	    for(int i=0;i<nums.size();i++){
	        p.push_back({nums[i],i});
	    }
	    sort(p.begin(),p.end());
	    for(int i=0;i<nums.size();i++){
	        if(i==p[i].second){
	            continue;
	        }
	        else{
	            count++;
	            swap(p[i],p[p[i].second]);
	            i--;
	        }
	    }
	    return count;
	}
};