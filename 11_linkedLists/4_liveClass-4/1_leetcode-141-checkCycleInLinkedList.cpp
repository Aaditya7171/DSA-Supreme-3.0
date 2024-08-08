// 141. Linked List Cycle
#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Approach 1:
        // unordered_map<ListNode*, bool> m;
        // ListNode* temp = head;
        
        // while(temp != NULL){
        //     if(m[temp] == true){
        //         return true;
        //     }
        //     else{
        //         m[temp] = true;
        //     }
        //     temp = temp->next;
        // }
        // return false;

     
        //Approach 2: 
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
                if(slow == fast){
                    return true;
                }
            }
        }
        return false;
    }
};