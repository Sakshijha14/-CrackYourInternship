// DAY13question4"
//https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n=matrix.size();
        int m=matrix[0].size();

        vector<long long>store;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long valueof=matrix[i][j];
                store.push_back(valueof);
            }
        }
        sort(store.begin(),store.end());
        return store[k-1];

        
    }
};