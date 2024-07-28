// DAY14question4
//https://www.geeksforgeeks.org/problems/median-of-bst/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void inorder(Node*root,vector<int>&v){
    if(!root){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
float findMedian(struct Node *root)
{
      //Code here
      
      vector<int>v;
      inorder(root,v);
      
      int n=v.size();
      if(n%2==0){
          return (v[n/2-1]+v[n/2])/2.0;
      }
      return (v[n/2]);
      
}