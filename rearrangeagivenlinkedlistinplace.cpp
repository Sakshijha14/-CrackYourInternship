// DAY33
//https://www.geeksforgeeks.org/rearrange-a-given-linked-list-in-place/

#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* reverse(Node*head){
    Node*prev=NULL;
    Node* curr=head;
    Node* next=NULL;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node* findmiddle(Node* head){

    Node*slow=head;
    Node*fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void rearrange(Node*head){
    if(head==nullptr || head->next==nullptr){
        return ;
    }
    Node*middle=findmiddle(head);
    Node*secondhalves=reverse(middle);


    Node*start=head;
    while(start && secondhalves){
        Node*temp1=start->next;
        Node*temp2=secondhalves->next;

        start->next=secondhalves;
        if(temp1==middle){
            break;
        }
        secondhalves->next=temp1;

        start=temp1;
        secondhalves=temp2;
    }

}

