
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(!head) return 0;
        ListNode* slow = head, *fast = head->next, *newLastNode = 0;
        int sum = 0;
        while(fast){
            if(fast->val != 0){
                sum += fast->val;
            } else {
                slow->val = sum;
                newLastNode = slow;
                slow = slow->next;
                sum = 0;
            }
            fast = fast->next;
        }
        ListNode* temp = newLastNode->next;
        // formed new list
        newLastNode->next = 0;
        // deleting old list
        while(temp){
            ListNode* nxt = temp->next;
            delete temp;
            temp = nxt;
        }
        return head;
    }
};
// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode* write = head;
//         ListNode* read = head->next;
//         int sum = 0;
//         while(read){
//             if(read->val) sum += read->val;
//             else{
//                 write = write->next;
//                 write->val = sum;
//                 sum = 0;
//             }
//             read = read->next;
//         }
//         write->next = nullptr;
//         return head->next;
//     }
// };