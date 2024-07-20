// DAY7question2
//https://leetcode.com/problems/spiral-matrix/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>result;

        if(matrix.empty() || matrix[0].empty()){
            return result;
        }

        int row=matrix.size();
        int col=matrix[0].size();

        int left=0,right=col-1,top=0,bottom=row-1;

        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
    
        }
        return result;

        
    }
};