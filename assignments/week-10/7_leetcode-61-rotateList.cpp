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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        int len = getLen(head);

        int actualRotations = (k % len);
        if(!actualRotations) return head;
        int newLastNodePos = len - actualRotations - 1;
        ListNode* newLastNode = head;
        for(int i = 0; i < newLastNodePos; i++){
            newLastNode = newLastNode->next;
        }
        ListNode* newHead = newLastNode->next;
        newLastNode->next = nullptr;
        ListNode* it = newHead;
        while(it->next) it=it->next;
        it->next = head;
        return newHead;
    }
};