// DAY 3
// https://leetcode.com/problems/word-search/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int delrow[4]={-1,0,1,0};
int delcol[4]={0,-1,0,1};

bool dfs(int row,int col,int index,vector<vector<char>>& board, string word){
    if(index==word.size()){
        return true;
    }
    int n=board.size();
    int m=board[0].size();
    int sizeofword=word.size();

    if(row<0||col<0||col>=m||row>=n||board[row][col]==' '){
        return false;
    }
    if(board[row][col]!=word[index]){
        return false;
    }
    char temp=board[row][col];
    board[row][col]=' ';

    for(int i=0;i<4;i++){
        int nrow=delrow[i]+row;
        int ncol=delcol[i]+col;

        if(dfs(nrow,ncol,index+1,board,word)){
           return true;
        }
    }
    board[row][col]=temp;
    return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int sizeofword=word.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(dfs(i,j,0,board,word))
                       return true;
                }
            }
        }
        return false;
        
    }
};