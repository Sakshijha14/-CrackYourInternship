// DAY29
//https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void maze(vector<vector<int>>& mat, int r, int c, int row, int col, string &temp, vector<string>& output, vector<vector<int>>& visited) {
        // Base case: reach the destination
        if (r == row - 1 && c == col - 1) {
            output.push_back(temp);
            return;
        }
        
        // Move Up
        if (r - 1 >= 0 && visited[r - 1][c] == 0 && mat[r - 1][c] == 1) {
            visited[r - 1][c] = 1;
            temp.push_back('U');
            maze(mat, r - 1, c, row, col, temp, output, visited);
            temp.pop_back();
            visited[r - 1][c] = 0;
        }
        
        // Move Down
        if (r + 1 < row && visited[r + 1][c] == 0 && mat[r + 1][c] == 1) {
            visited[r + 1][c] = 1;
            temp.push_back('D');
            maze(mat, r + 1, c, row, col, temp, output, visited);
            temp.pop_back();
            visited[r + 1][c] = 0;
        }
        
        // Move Left
        if (c - 1 >= 0 && visited[r][c - 1] == 0 && mat[r][c - 1] == 1) {
            visited[r][c - 1] = 1;
            temp.push_back('L');
            maze(mat, r, c - 1, row, col, temp, output, visited);
            temp.pop_back();
            visited[r][c - 1] = 0;
        }
        
        // Move Right
        if (c + 1 < col && visited[r][c + 1] == 0 && mat[r][c + 1] == 1) {
            visited[r][c + 1] = 1;
            temp.push_back('R');
            maze(mat, r, c + 1, row, col, temp, output, visited);
            temp.pop_back();
            visited[r][c + 1] = 0;
        }
    }

    vector<string> findPath(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        string temp;
        vector<string> output;
        vector<vector<int>> visited(row, vector<int>(col, 0));
        
        if (mat[0][0] == 1 && mat[row - 1][col - 1] == 1) {
            visited[0][0] = 1;
            maze(mat, 0, 0, row, col, temp, output, visited);
        }
        
        return output;
    }
};
