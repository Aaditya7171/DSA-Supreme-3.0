#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    //Approach 1:
    // ListNode* copyLN(ListNode* head){
    //     if(head == NULL) return NULL;
    //     ListNode* newHead = new ListNode(head->val);
    //     ListNode* curr = newHead;
    //     ListNode* origCurr = head->next;

    //     while(origCurr != NULL){
    //         curr->next = new ListNode(origCurr->val);
    //         curr = curr->next;
    //         origCurr = origCurr->next;
    //     } 
    //     return newHead;
    // }
    // ListNode* reverseLN(ListNode* &newHead){
    //     ListNode* prev = NULL;
    //     ListNode* curr = newHead;
    //     while(curr != NULL){
    //         ListNode* forward = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = forward;
    //     }
    //     return prev;
    // }
    // bool compareLN(ListNode* head, ListNode* newHead){
    //     ListNode* nhead = head;
    //     ListNode* nnewHead = newHead;
    //     while(nhead != NULL && nnewHead != NULL) {
    //         if(nhead->val != nnewHead->val){
    //             return false;
    //         }
    //         nhead = nhead->next;
    //         nnewHead = nnewHead->next;
    //     }
    //     return (nhead == NULL && nnewHead == NULL);
    // }


    //Approach 2:
    ListNode* getMiddle(ListNode* head, ListNode* &prevOfMidNode) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                prevOfMidNode = slow;
                slow = slow->next;
            }
        }
        return slow;
    }
    ListNode* reverseLN(ListNode* &prev, ListNode* &curr){
        while(curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //Approach 1:
        // ListNode* newHead = copyLN(head);
        // newHead = reverseLN(newHead);
        // return compareLN(head, newHead);


        //Approach 2:
        if(head->next == NULL) return true; //single

        ListNode* prevOfMidNode = NULL;
        ListNode* middleNode = getMiddle(head, prevOfMidNode);
        //break
        prevOfMidNode->next = NULL;
        //reverse
        ListNode* headOfFirstHalf = head;
        ListNode* prev = NULL;
        ListNode* curr = middleNode;
        ListNode* headOfSecondHalf = reverseLN(prev, curr);
        //compare
        ListNode* tempHead1 = headOfFirstHalf;
        ListNode* tempHead2 = headOfSecondHalf;
        
        while(tempHead1 != NULL){
            if(tempHead1->val != tempHead2->val){
                return false;
            }
            tempHead1 = tempHead1->next;
            tempHead2 = tempHead2->next;
        }
        return true;
    }
};