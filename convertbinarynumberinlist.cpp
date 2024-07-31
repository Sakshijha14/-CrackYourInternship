// DAY17
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int sum=0;
        while(temp){
            sum=sum*2+temp->val;
            temp=temp->next;
        }
        return sum;
        
    }
};