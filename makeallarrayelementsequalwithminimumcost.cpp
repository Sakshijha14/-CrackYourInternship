// DAY39
//https://www.geeksforgeeks.org/make-array-elements-equal-minimum-cost/

#include<bits/stdc++.h>
using namespace std;

int mincosttomakeelementequal(int a[],int n){

    int y;
    if(n%2==1){
        y=a[n/2];
    }
    else{
        y=(a[n/2]+a[(n-2)/2])/2;
    }

    int s=0;
    for(int i=0;i<n;i++){
        s+=abs(a[i]-y);
    }
    return s;
}

