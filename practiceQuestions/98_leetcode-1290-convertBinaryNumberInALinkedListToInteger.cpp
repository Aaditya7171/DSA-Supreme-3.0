class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        while(head){
            res = (res << 1) | head->val;
            head = head->next;
            //res << 1: Left shift by 1 = multiply by 2 = make room for next bit
            //res << 1 | head->val: Bitwise OR = add the current bit to the rightmost position
        }
        return res;
    }
};