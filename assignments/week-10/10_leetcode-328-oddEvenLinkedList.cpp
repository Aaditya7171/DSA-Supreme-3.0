class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || head->next == 0) return head;
        ListNode* h1 = head; // odd indexed list
        ListNode* h2 = head->next; // even indexed list
        ListNode* evenHead = h2;
        while(h2 && h2->next){
            h1->next = h2->next;
            h2->next = h2->next->next;
            h1 = h1->next;
            h2 = h2->next;
        }
        // two independent prepared list has been regrouped
        // Odd indexed list -> Even indexed list
        h1->next = evenHead;
        return head;
    }
};