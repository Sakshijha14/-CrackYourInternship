// DAY20question2
//https://leetcode.com/problems/symmetric-tree/

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

bool isSymmetrictree(TreeNode*left,TreeNode* right){
    if(left==NULL && right==NULL){
        return true;
    }
    if(left==NULL || right==NULL){
        return false;
    }
    if(left->val!=right->val){
        return false;
    }
    return isSymmetrictree(left->left,right->right) && isSymmetrictree(left->right,right->left);
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return isSymmetrictree(root->left,root->right);
        
    }
};