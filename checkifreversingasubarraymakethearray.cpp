#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
bool sort(int arr[],int n){

    
        
        int count=0;

        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                count++;
            }
        }
        if(arr[n-1]>arr[0]){
            count++;
        }
        return (count<=1);
}
};