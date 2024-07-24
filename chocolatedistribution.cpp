// DAY11question5
//https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    m=m-1;
    sort(a.begin(),a.end());
    long long diff= INT_MAX;
    for(int i=0;i<n-m;i++){
        diff=min(diff,a[i+m]-a[i]);
    }
    return diff;
    }   
};