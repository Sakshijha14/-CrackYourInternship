#include<bits/stdc++.h>
 using namespace std;

int maximalRectangle(vector<vector<char>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        return 0;
    }

    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> left(n, 0);
    vector<int> right(n, n);
    vector<int> height(n, 0);
    int maxArea = 0;

    for (const auto& row : matrix) {
        int currentleft = 0, currentright = n;
        for (int j = 0; j < n; j++) {
            if (row[j] == '1') {
                height[j]++;
            } else {
                height[j] = 0;
            }
        }
        for (int j = 0; j < n; j++) {
            if (row[j] == '1') {
                left[j] = max(left[j], currentleft);
            } else {
                left[j] = 0;
                currentleft = j + 1;
            }
        }
        for (int j = n - 1; j >= 0; j--) {
            if (row[j] == '1') {
                right[j] = min(right[j], currentright);
            } else {
                right[j] = n;
                currentright = j;
            }
        }
        for (int j = 0; j < n; j++) {
            maxArea = max(maxArea, (right[j] - left[j]) * height[j]);
        }
    }

    return maxArea;
}


