// DAY24question2
//https://leetcode.com/problems/diameter-of-binary-tree/

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
int res=0;
int levelofTree(TreeNode* root){

    if(root==NULL){
        return 0;
    }
    int maxi=INT_MIN;
    int left=levelofTree(root->left);
    int right=levelofTree(root->right);
    res=max(res,left+right+1);
    return 1+max(left,right);
    
}
    int diameterOfBinaryTree(TreeNode* root) {

        int ouput=levelofTree(root);
        return res-1;

    }
};