
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
    
    ListNode* detectCycle(ListNode *head) {
        ListNode* fast = hasCycle(head);
        if(!fast) return NULL;

        ListNode* slow = head;
        ListNode* prev = NULL;
        while(slow != fast){
            if(slow == fast) return slow;
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
        return slow;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    // Connect nodes to form a linked list: 1 -> 2 -> 3 -> 4 -> 5
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL; 

    // Create a cycle: Connect fifth node back to second node
    fifth->next = second;

    Solution sol;
    ListNode* cycleStart = sol.detectCycle(head);
    if(cycleStart) {
        std::cout << "Cycle detected. Start node value: " << cycleStart->val << std::endl;
    } else {
        std::cout << "No cycle detected." << std::endl;
    }
    return 0;
}