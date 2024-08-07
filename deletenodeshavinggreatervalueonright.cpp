// DAY24
//https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution
{
    
    public:
    Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    while (current) {
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}


Node* compute(Node* head) {
   
    head = reverseList(head);
    
    
    Node* newHead = nullptr;
    Node* tail = nullptr;
    int maxVal = INT_MIN;
    
    while (head) {
        if (head->data >= maxVal) {
            maxVal = head->data;
            Node* newNode = new Node(head->data);
            if (!newHead) {
                newHead = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        head = head->next;
    }
    
   
    return reverseList(newHead);
}
   
    
};