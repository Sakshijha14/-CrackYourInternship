// DAY28question4
//https://leetcode.com/problems/sum-of-left-leaves/

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

void sum(TreeNode* root,bool left,int &output){

    if(root==NULL){
        return ;
    }

    if(!root->left && !root->right && left){
        output+=root->val;
    }

    sum(root->left,true,output);
    sum(root->right,false,output);
}
    int sumOfLeftLeaves(TreeNode* root) {

        int output=0;
        sum(root,false,output);
        return output;
        
    }
};