// DAY28quesiton2
//https://leetcode.com/problems/number-of-islands/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void bfs(int row,int col,vector<vector<int>> &visited,vector<vector<char>>&grid){
    
        visited[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            row=q.front().first;
            col=q.front().second;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    if(abs(delrow)==abs(delcol)){
                        continue;
                    }
                    int newrow=row+delrow;
                    int newcol=col+delcol;

                    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && !visited[newrow][newcol] && grid[newrow][newcol]=='1'){
                        visited[newrow][newcol]=1;
                        q.push({newrow,newcol});
                    }
                }
            }
        }

}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,visited,grid);
                    
                }
            }
        }
        return count;
    }
};