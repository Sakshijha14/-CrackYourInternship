// DAY21
//https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        vector<int>numbers;
        while(head){
            numbers.push_back(head->val);
            head=head->next;
        }

        int left=0;
        int right=numbers.size()-1;

        while(left<right){
            if(numbers[left]!=numbers[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
        

    }
};