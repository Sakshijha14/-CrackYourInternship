// DAY18question2
//https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_set<int> seen;
        for(int i = 0; i < n; i++) {
            if(seen.count(arr[i] + x) || seen.count(arr[i] - x)) {
                return 1;
            }
            seen.insert(arr[i]);
        }
        return -1;
    }
};
