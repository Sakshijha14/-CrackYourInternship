// DAY28
//https://leetcode.com/problems/path-sum/

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        

        if(root==NULL){
            return false;
        }

        if(!root->left && !root->right){
            return targetSum==root->val;
        }

        bool hasleft=hasPathSum(root->left,targetSum-root->val);
        bool hasright=hasPathSum(root->right,targetSum-root->val);

        return hasleft || hasright;

    }
};