// DAY21question2
//https://leetcode.com/problems/maximum-width-of-binary-tree/

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
    int widthOfBinaryTree(TreeNode* root) {

        long long output=0;
        if(root==NULL){
            return 0;
        }

        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            int n=q.size();
            long long mini=q.front().second;
            long long left=0;
            long long  right=0;

            for(int i=0;i<n;i++){
                TreeNode*temp=q.front().first;
                long long index=q.front().second-mini;
                q.pop();
                if(temp->left){
                    q.push({temp->left,2*index+1});
                }
                if(temp->right){
                    q.push({temp->right,2*index+2});
                }
                if(i==0){
                    left=index;
                }
                if(i==n-1){
                    right=index;
                }
            }
            output=max(output,right-left+1);
        }
    return output;  
    }
};