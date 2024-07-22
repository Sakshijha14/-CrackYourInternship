//DAY9question2
//https://leetcode.com/problems/rotate-image/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();

        for(int row=0;row<n-1;row++){
            for(int col=row+1;col<m;col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        for(int row=0;row<n;row++){
            reverse(matrix[row].begin(),matrix[row].end());
        }
        
    }
};