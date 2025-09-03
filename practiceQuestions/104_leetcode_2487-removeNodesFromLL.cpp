class Solution {
public:
    ListNode* helper(ListNode* Node){
        if(!Node) return nullptr;
        ListNode* c = helper(Node->next);
        if(c && Node->val < c->val) return c;
        Node->next = c;
        return Node;
    }
    ListNode* removeNodes(ListNode* head) {
        return helper(head);
    }
};