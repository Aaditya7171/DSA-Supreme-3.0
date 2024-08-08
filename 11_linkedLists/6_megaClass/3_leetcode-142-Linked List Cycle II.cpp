
#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* hasCycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
                if(slow == fast){
                    return slow;
                }
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        //Approach 1(visited method):
        // unordered_map<ListNode*, bool> m;
        // ListNode* temp = head;
        
        // while(temp != NULL){
        //     if(m[temp] == true){
        //         return temp;
        //     }
        //     else{
        //         m[temp] = true;
        //     }
        //     temp = temp->next;
        // }
        // return NULL;

        //Approach 2(tortoise approach):
        ListNode* fast = hasCycle(head);
        if(!fast) return NULL;

        ListNode* slow = head;
        while(slow != fast){
            if(slow == fast) return slow;
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};