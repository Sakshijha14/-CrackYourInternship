// DAY36
//https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};


class Solution {
  public:
    
    Node*merge2lists(Node*l1,Node*l2){
        
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }
        
        Node*head=l1->data<=l2->data?l1:l2;
        head->bottom=l1->data<=l2->data? merge2lists(l1->bottom,l2):merge2lists(l1,l2->bottom);
        return head;
    }
    
    
    Node *flatten(Node *root) {
        
        if(!root || !root->next){
            return root;
        }
        return merge2lists(root,flatten(root->next));
    }
};