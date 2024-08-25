// DAY42
//https://www.geeksforgeeks.org/find-the-number-of-islands-using-dfs/

#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>>& matrix, int c, int r, vector<vector<bool>>& visited) {
    int n = matrix.size();
    int m = matrix[0].size();
    return (r >= 0) && (r < n) && (c >= 0) && (c < m) && (matrix[r][c] == '1' && !visited[r][c]);
}

void DFS(vector<vector<char>>& matrix, int r, int c, vector<vector<bool>>& visited) {
    vector<int> rneighbour = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> cneighbour = {-1, 0, 1, -1, 1, -1, 0, 1};
    visited[r][c] = true;

    for (int k = 0; k < 8; k++) {
        int newrow = r + rneighbour[k];
        int newcol = c + cneighbour[k];
        if (isSafe(matrix, newrow, newcol, visited)) {
            DFS(matrix, newrow, newcol, visited);
        }
    }
}

int countislands(vector<vector<char>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int count = 0;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (matrix[r][c] == '1' && !visited[r][c]) {
               
                DFS(matrix, r, c, visited);
                count++;
            }
        }
    }
    return count; 
}

