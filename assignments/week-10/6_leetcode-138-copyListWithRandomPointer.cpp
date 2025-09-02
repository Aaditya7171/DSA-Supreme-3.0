class Solution {
public:
    Node* helper(Node* head, unordered_map<Node*, Node*>& mp){
        if(!head) return 0;
        Node* newHead = new Node(head->val);
        mp[head] = newHead;
        newHead->next = helper(head->next, mp);
        if(head->random){
            newHead->random = mp[head->random];
        }
        return newHead;
    }
    Node* copyRandomList(Node* head) {
    // T. C. O(n), S.C. O(n)
       unordered_map<Node*, Node*> mp;
       return helper(head, mp);
    }
};