// DAY1question4
//https://leetcode.com/problems/validate-binary-search-tree/

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

bool BSTtree(TreeNode*root,long long l,long long r){

     if(root==NULL){
            return true;
    }

    if(root->val<r && root->val>l){
        return BSTtree(root->left,l,root->val) && BSTtree(root->right,root->val,r);
    }
    else{
        return false;
    }
       

}
    bool isValidBST(TreeNode* root) {
        return BSTtree(root,LLONG_MIN,LLONG_MAX);
       
        
    }
};