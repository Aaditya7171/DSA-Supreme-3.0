class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        for(ListNode* head : lists){
            while(head){
                values.push_back(head->val);
                head = head->next;
            }
        }
        sort(values.begin(), values.end());
        ListNode dummy(0);
        ListNode* curr = &dummy;
        for(int v : values){
            curr->next = new ListNode(v);
            curr = curr->next;
        }
        return dummy.next;
    }
};