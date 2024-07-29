// DAY15question3
//https://www.geeksforgeeks.org/problems/binary-tree-to-dll/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 


class Solution
{
    public: 
    
    
    void inordertree(Node*root,vector<int>&output){
        
        if(!root){
            return;
        }
        inordertree(root->left,output);
        output.push_back(root->data);
        inordertree(root->right,output);
    }
    
    Node* doublelist(vector<int>output,int n){
        if(n==0){
            return nullptr;
        }
        
        Node*head=new Node(output[0]);
        Node*temp=head;
        
        
        for(int i=1;i<n;i++){
            Node*newNode=new Node(output[i]);
            temp->right=newNode;
            newNode->left=temp;
            temp=temp->right;
        }
        return head;
    }
    Node * bToDLL(Node *root)
    {
        
        
        vector<int>output;
        inordertree(root,output);
        int n=output.size();
        Node* curr=doublelist(output,n);
        return curr;
    }
};