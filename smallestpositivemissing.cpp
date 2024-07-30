// DAY16
//https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        
        sort(arr,arr+n);
        int find=1;
        for(int i=0;i<n;i++){
            if(arr[i]==find){
                find++;
            }
        }
        return find;
    } 
};