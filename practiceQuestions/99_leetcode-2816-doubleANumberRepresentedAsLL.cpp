class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;
        while(head){
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);
        ListNode* curr = head;
        int carry = 0;
        while(curr){
            int val = curr->val * 2 + carry;
            curr->val = val % 10;
            carry = val / 10;

            if(!curr->next && carry){
                curr->next = new ListNode(carry);
                break;
            }
            curr = curr->next;
        }
        return reverseList(head);
    }
};