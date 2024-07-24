// DAY11question10
//https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
      
        
        int index=0;
        for(int i=0;i<n;i++){
            if(M[index][i]==1){
                index=i;
            }
            
        }
        
        for(int i=0;i<n;i++){
            if(i!=index && (M[index][i]==1 || M[i][index]==0)){
                return -1;
            }
        }
        return index;
    }
};