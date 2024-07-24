// DAY11question5
//https://leetcode.com/problems/reorder-list/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:

ListNode*reverse(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    ListNode* prev=NULL;
    ListNode* temp=head;

    while(temp!=NULL){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
    void reorderList(ListNode* head) {

        if(head==NULL ||head->next==NULL){
            return;
        }
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=reverse(slow->next);
        slow->next=NULL;
        ListNode*first=head;

        while(second){
            ListNode*temp1=first->next;
            ListNode*temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }

        
    }
};