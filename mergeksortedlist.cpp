// Day11question4
//https://leetcode.com/problems/merge-k-sorted-lists/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int>store;
        for(auto it:lists){
            while(it!=NULL){
            store.push_back(it->val);
            it=it->next;
            }
        }
        if(store.empty()){
            return NULL;
        }
        sort(store.begin(),store.end());

        
        ListNode* head=new ListNode(store[0]);
        ListNode* temp=head;
        for(int i=1;i<store.size();i++){
            temp->next=new ListNode(store[i]);
            temp=temp->next;
        }
        return head;
  
    }
};