// DAY15question4
//https://www.geeksforgeeks.org/problems/preorder-to-postorder4423/1

#include<bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;



Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}



class Solution {
  public:
    
    
    Node*solve(Node*root,int data){
        if(root==NULL){
            return newNode(data);
        }
        
        if(data<root->data){
            root->left=solve(root->left,data);
        }
        if(data>root->data){
            root->right=solve(root->right,data);
        }
        return root;
    }
    Node* Bst(int pre[], int size) {
        
        
        Node*root=NULL;
        for(int i=0;i<size;i++){
            root=solve(root,pre[i]);
        }
        
        return root;
        
        
    }
};