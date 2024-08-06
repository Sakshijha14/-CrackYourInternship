// DAYquestion10
//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:

TreeNode* sortedarray(vector<int>&nums,int start,int end){

    if(start>end){
        return NULL;
    }
    int mid=start+(end-start)/2;
    TreeNode* node=new TreeNode(nums[mid]);
    node->left=sortedarray(nums,start,mid-1);
    node->right=sortedarray(nums,mid+1,end);

    return node;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int n=nums.size();
        if(n==0){
            return NULL;
        }

        TreeNode*root=sortedarray(nums,0,n-1);
        return root;


        
    }
};