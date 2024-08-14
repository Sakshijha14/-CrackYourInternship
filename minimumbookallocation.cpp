#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  bool ispossible(int arr[],int n,int m,int mid){
      
      int studentCount=1;
      int pageSum=0;
      
      for(int i=0;i<n;i++){
          if(pageSum+arr[i]<=mid){
              pageSum+=arr[i];
          }
          else{
              studentCount++;
              if(studentCount>m || arr[i]>mid){
                  return false;
              }
              pageSum=arr[i];
          }
      }
      return true;
  }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        
        if(m>n){
            return -1;
        }
        int start=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        
        int end=sum;
        long long output=-1;
        int mid=start+(end-start)/2;
        
        while(start<=end){
            if(ispossible(arr,n,m,mid)){
                output=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return output;
    }
};