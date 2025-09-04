class Solution {
public:
    ListNode* merge(ListNode* left, ListNode* right) {
        if(left == 0) return right;
        if(right == 0) return left;

        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;

        while(left && right){
            if(left->val <= right->val){
                mptr->next = left;
                mptr = left;
                left = left->next;
            }
            else{
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
        if(left){
            mptr->next = left;
        }
        if(right){
            mptr->next = right;
        }
        return ans->next;
    }
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    } 

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        // Break Linked List into two equal halves using "mid"
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = 0;

        // Sort recursively
        left = sortList(left);
        right = sortList(right);

        // Nerge both left and right linked lists
        ListNode* mergeLL = merge(left, right);
        return mergeLL;
    }
};