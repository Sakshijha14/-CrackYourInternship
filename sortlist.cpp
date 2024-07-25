// DAY12
//https://leetcode.com/problems/sort-list/

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
    ListNode* sortList(ListNode* head) {

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
};