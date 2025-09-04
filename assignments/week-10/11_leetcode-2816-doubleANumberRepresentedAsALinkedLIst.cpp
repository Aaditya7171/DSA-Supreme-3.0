class Solution {
public:
    void doubleHelper(ListNode* head, int &carry){
        if(!head) return;
        doubleHelper(head->next, carry);

        int prod = head->val * 2 + carry;
        head->val = prod % 10;
        carry = prod / 10;
    }
    ListNode* doubleIt(ListNode* head) {
       int carry = 0;
       doubleHelper(head, carry);
       if(carry){
        ListNode* carryNode = new ListNode(carry);
        carryNode->next = head;
        head = carryNode;
       }
       return head;
    }
};