// DAY22question3
//https://leetcode.com/problems/flood-fill/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:


void dfs(int row,int col,vector<vector<int>>&output,vector<vector<int>>&image,int color,int delrow[],int delcol[],int inicolor){

    output[row][col]=color;
    int n=image.size();
    int m=image[0].size();

    for(int i=0;i<4;i++){
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && output[nrow][ncol]!=color){

            dfs(nrow,ncol,output,image,color,delrow,delcol,inicolor);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        vector<vector<int>>output=image;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        dfs(sr,sc,output,image,color,delrow,delcol,inicolor);
        return output;
    }
};