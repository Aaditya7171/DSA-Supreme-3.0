class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr && curr->next){
            int gcd_val = std::gcd(curr->val, curr->next->val);
            ListNode* newNode = new ListNode(gcd_val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        return head;
    }
};