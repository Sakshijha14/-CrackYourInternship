// DAY16question2
//https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

#include<bits/stdc++.h>
using namespace std;

struct ListNode{

    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode*next):val(x),next(next){}
};

ListNode*sortList(ListNode*head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    vector<int>sorted;
    ListNode*node=head;
    while(node){
        sorted.push_back(node->val);
        node=node->next;
    }
    sort(sorted.begin(),sorted.end());
    ListNode*temp=head;

    for(auto it:sorted){
        temp->val=it;
        temp=temp->next;
    }
    return head;

}