//206. Reverse Linked List
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* &prev, ListNode* &curr)
    {
        //base case
        if(curr == nullptr){
            return prev;
        }

        //1 case that we'll solve
        ListNode* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;

        //recursive call
        return reverseList(prev, curr);
    }
     
    ListNode* reverseList(ListNode* head) {
        // Recursive Approach
        // ListNode* prev = NULL;
        // ListNode* curr = head;

        // ListNode* newHead = reverseList(prev, curr);
        // return newHead;

        //Iterative Approach
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
};  