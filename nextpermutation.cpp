// DAY8qquestion3
//https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/0


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        
        vector<vector<int>>output;
        sort(arr.begin(),arr.end());
        do{
            output.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        
        return output;
    }
};