// DAY17question2
//https://leetcode.com/problems/balanced-binary-tree/

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

    bool isBalanced(TreeNode* root) {
        bool result=true;
        helper(root,result);

        return result;
    }

    int helper(TreeNode* root,bool& balanced){
        if(root==NULL || balanced==false)
        return 0;

        int l=helper(root->left,balanced);
        int r=helper(root->right,balanced);

        if(abs(l-r)>1)
        balanced=false;

        return max(l,r)+1;
    }
    
};