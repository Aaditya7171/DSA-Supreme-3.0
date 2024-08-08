#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        int pos = 0;        
        if(head->next == NULL) {
            delete head;
            return 0;
        }
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
                pos++;
            }
        }
        for(int i = 0; i < pos - 1; i++){
            temp = temp->next;
        }
        temp->next = slow->next;
        delete slow;
        return head;
    }
};