class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* curr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            // Push right first, then left
            if(curr->right) q.push(curr->right);
            if(curr->left) q.push(curr->left); 
        }
        return curr->val; // // last node visited is bottom-left
    }
};