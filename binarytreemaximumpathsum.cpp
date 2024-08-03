// DAY20question4
//https://leetcode.com/problems/binary-tree-maximum-path-sum/

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

int pathrequired(TreeNode* root,int& maxi){
    if(root==NULL){
        return 0;
    }
    int l=max(0,pathrequired(root->left,maxi));
    int r=max(0,pathrequired(root->right,maxi));
    maxi=max(maxi,l+r+root->val);
    return root->val+max(l,r);


}
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        pathrequired(root,maxi);
        return maxi;
        
    }
};