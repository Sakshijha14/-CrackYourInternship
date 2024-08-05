// DAY22question2
//https://leetcode.com/problems/binary-tree-paths/

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

void binaryTreePathsreference(TreeNode* root,string s,vector<string>&output){

            if(root==NULL){
            return;
        }
        string a=to_string(root->val);

        if(root->left==NULL && root->right==NULL){
            s+=a;
            output.push_back(s);
            return;
        }
        binaryTreePathsreference(root->left,s+a+"->",output);
        binaryTreePathsreference(root->right,s+a+"->",output);
        

}
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string>output;
        binaryTreePathsreference(root,"",output);
        return output;

    }
};