#include<iostream>
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* solve(Node* head){
        auto it = head;
        auto tail = it;

        while(it){
            if(it->child){
                auto childTail = solve(it->child);
                auto temp = it->next;
                it->next = it->child;
                it->next->prev = it;
                childTail->next = temp;
                if(temp) temp->prev = childTail;
                it->child = NULL;  
            }
            tail = it;
            it = it->next;
        }
        return tail;
    }

    Node* flatten(Node* head) {
        if(!head) return NULL;
        solve(head);
        return head;
    }
};