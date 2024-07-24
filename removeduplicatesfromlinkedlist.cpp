// DAY11
//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

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
    ListNode* deleteDuplicates(ListNode* head) {
        

        unordered_map<int,int>store;
        ListNode*temp=head;

        while(temp){
            store[temp->val]++;
            temp=temp->next;
        }
        vector<int>result;
        for(auto i:store){
            if(i.second==1){
                result.push_back(i.first);
            }
        }
        sort(result.begin(),result.end());

        ListNode* newhead=new ListNode(-1);
        temp=newhead;
        for(auto i:result){
            ListNode*newnode=new ListNode(i);
            temp->next=newnode;
            temp=newnode;
        }
        return newhead->next;
    }
};