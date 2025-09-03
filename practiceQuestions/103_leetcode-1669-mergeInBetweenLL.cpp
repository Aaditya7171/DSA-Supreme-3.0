class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prevA = list1;
        for(int i = 0; i < a - 1; i++) prevA = prevA->next;
        ListNode* nodeB = prevA->next;
        for(int i = 0; i < b - a; i++) nodeB = nodeB->next;
        prevA->next = list2;
        ListNode* tail2 = list2;
        while(tail2->next) tail2 = tail2->next;
        tail2->next = nodeB->next;
        return list1;
    }
};