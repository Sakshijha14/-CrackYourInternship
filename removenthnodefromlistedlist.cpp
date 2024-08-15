// DAY32
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* output=new ListNode(0,head);
        ListNode* dummy=output;

        for(int i=0;i<n;i++){
            head=head->next;
        }
        while(head!=nullptr){
            head=head->next;
            dummy=dummy->next;
        }

        dummy->next=dummy->next->next;

        return output->next;
    }
};