class Solution {
public:
    int getLen(ListNode* head){
        if(!head) return 0;
        return 1 + getLen(head->next);
    }
    ListNode* swapNodes(ListNode* head, int k) {
        // Case: 1-->
        if(!head || !(head->next)) return head;
        int len = getLen(head);
        int lpos = k, rpos = len - k  + 1;
        if(rpos < lpos) swap(rpos, lpos);
        // Case: 2--> equal lpos & rpos
        if(lpos == rpos) return head;
        // Case: 3--> len == 2
        if(len == 2){
            ListNode* nextNode = head->next;
            nextNode->next = head;
            head->next = nullptr;
            head = nextNode;
            return head;
        }
        // Case: 4-> if k == 1 || k == N
        if(lpos == 1){
            ListNode* lp = 0;
            ListNode* ln = head;
            ListNode* rp = head;
            for(int i = 0; i < rpos-2; i++)
               rp = rp->next; 
            ListNode* rn = rp->next;
            ListNode* rsave = rn->next;

            // swapping(by links)
            rn->next = ln->next;
            rp->next = ln;
            ln->next = rsave;
            head = rn;
            return head;
        }
        // Case: 5--> Number of nodes between swap nodes == 0
        int noOfNodes = rpos - lpos - 1;
        if(noOfNodes == 0){
            ListNode* lp = head;
            for(int i = 0; i < lpos - 2; i++)
                lp = lp->next;
            ListNode* ln = lp->next;
            ListNode* rp = head;
            for(int i = 0; i < rpos - 2; i++)
                rp = rp->next;
            ListNode* rn = rp->next;
            ListNode* rsave = rn->next;

            // swapping
            lp->next = rp->next;
            rn->next = rp;
            rp->next = rsave;
            return head;
        } else{
            //Case: 6--> Number of nodes between swap nodes >= 1
            ListNode* lp = head;
            for(int i = 0; i < lpos - 2; i++)
                lp = lp->next;
            ListNode* ln = lp->next;
            ListNode* rp = head;
            for(int i = 0; i < rpos - 2; i++)
                rp = rp->next;
            ListNode* rn = rp->next;
            ListNode* rsave = rn->next;

            // Swapping
            lp->next = rn;
            rn->next = ln->next;
            rp->next = ln;
            ln->next = rsave;
            return head;
        }
    }
};
/*
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        // Bruteforce solution
        ListNode* first = head;
        for(int i = 1; i < k; i++)
            first = first->next;
        ListNode* kthNodeFromStart = first;
        ListNode* second = head;
        first = first->next;
        while(first != nullptr){
            first = first->next;
            second = second->next;
        }
        ListNode* kthNodeFromEnd = second;
        swap(kthNodeFromStart->val, kthNodeFromEnd->val);
        return head;
    }
};
*/