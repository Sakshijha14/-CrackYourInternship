// DAY29question3
//https://leetcode.com/problems/binary-tree-inorder-traversal/

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

void inorder(TreeNode* root,vector<int>&output){

    if(root==NULL){
        return;
    }
    inorder(root->left,output);
    output.push_back(root->val);
    inorder(root->right,output);
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>output;
        inorder(root,output);
        return output;
    }
};