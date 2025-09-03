class Solution {
public:
    int getLen(ListNode* &head){
        ListNode* temp = head;
        int len = 0;
        while(temp){
            temp = temp->next;
            len++;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = getLen(head);
        if(n == length) return head->next;
        ListNode* temp = head;
        for(int i = 1; i < length - n; i++){
            temp = temp -> next;
        }
        temp->next = temp->next->next;
        return head;
    }
};