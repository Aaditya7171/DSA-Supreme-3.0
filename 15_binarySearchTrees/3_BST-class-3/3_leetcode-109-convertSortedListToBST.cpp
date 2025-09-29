class Solution {
public:
    int getLength(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        return len;
    }

    TreeNode* solve(ListNode* &head, int n){
        if(!head || n <= 0) return NULL;
        TreeNode* leftSubtree = solve(head, n / 2);
        // now head will be at mid
        TreeNode* root = new TreeNode(head->val);
        root->left = leftSubtree;
        head = head->next;
        TreeNode* rightSubtree = solve(head, n-n/2-1);
        root->right = rightSubtree;
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        int n = getLength(head);
        TreeNode* root = solve(head, n);
        return root; 
    }
};