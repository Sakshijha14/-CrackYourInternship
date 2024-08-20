// DAY37
//https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/

#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        data=d;
        next=nullptr;
    }
};

Node* head,*tail;
void Insertlast(int data){
    Node* newnode=new Node(data);
    if(head==nullptr){
        head=newnode,
        tail=newnode;
    }
    else{
        tail=tail->next=newnode;
    }

}

Node* segregateevenodd(){

    Node* oddhead=new Node(-1),*oddtail=oddhead;
    Node* evenhead=new Node(-1),*eventail=evenhead;
    Node*curr=head,*temp;

    while(curr){
        temp=curr;
        curr=curr->next;
        temp->next=nullptr;

        if(temp->data & 1){
            oddtail->next=temp;
            oddtail=temp;
        }
        else{
            eventail->next=temp;
            eventail=temp;
        }
    }
    eventail->next=oddhead->next;
    return evenhead->next;

}

void print(Node*node){
    while(node!=nullptr){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){

    Insertlast(1);
    Insertlast(2);
    Insertlast(3);
    Insertlast(4);

    cout<<"original ll";
    print(head);
    Node*newhead=segregateevenodd();
    cout<<"\n modified ll";
    print(head);


    return 0;
}