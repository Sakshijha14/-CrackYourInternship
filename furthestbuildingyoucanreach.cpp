// DAY13question3
//https://leetcode.com/problems/furthest-building-you-can-reach/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {

        priority_queue<int>pq;

        int n=heights.size();
        priority_queue<int,vector<int>,greater<int>>miniheap;

        for(int i=0;i<n-1;i++){
            int difference=heights[i+1]-heights[i];

            if(difference>0){
                miniheap.push(difference);
            }
            if(miniheap.size()>ladders){
                int smallestdifference=miniheap.top();
                miniheap.pop();
                bricks-=smallestdifference;
            }
            if(bricks<0){
                return i;
            }
        }
    return heights.size()-1;
    }
};