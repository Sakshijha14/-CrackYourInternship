#include<bits/stdc++.h>
using namespace std;

int minimumcoin(vector<int>&arr,int n,int k){

   
    sort(arr.begin(),arr.end());
    int coinsrequired=ceil(1.0*n/(k+1));

     int output=0;


    for(int i=0;i<=coinsrequired-1;i++){
        output+=arr[i];
    }
    return output;
}

int main(){

    vector<int>arr={100,20,50,10,2,5};
    int n=arr.size();

    int k=3;

    cout<<minimumcoin(arr,n,k);


    return 0;
}