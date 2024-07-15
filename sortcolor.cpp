#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int ones=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(nums[i]==0){
            zero++;
        }
        else if(nums[i]==1){
            ones++;
        }
        }
        for(int i=0;i<zero;i++){
            nums[i]=0;
        }
        for(int i=zero;i<zero+ones;i++){
            nums[i]=1;
        }
        for(int i=zero+ones;i<n;i++){
            nums[i]=2;
        }

    }
};