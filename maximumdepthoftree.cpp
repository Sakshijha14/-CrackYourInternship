// DAY27question2
//https://leetcode.com/problems/maximum-depth-of-binary-tree/

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
    int maxDepth(TreeNode* root) {

        if(root==NULL){
            return NULL;
        }

        int left=maxDepth(root->left);
        int right=maxDepth(root->right);

        return 1+max(left,right);
        
    }
};