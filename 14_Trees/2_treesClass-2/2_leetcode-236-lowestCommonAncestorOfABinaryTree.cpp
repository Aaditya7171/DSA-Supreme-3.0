class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // base cases
        if(!root) return NULL;
        if(root->val == p->val)
            return p;
        if(root->val == q->val)
            return q;
        
        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

        // 4 cases
        if(leftAns == NULL && rightAns == NULL) return NULL;
        else if(leftAns == NULL && rightAns != NULL) return rightAns;
        else if(leftAns != NULL && rightAns == NULL) return leftAns;
        else return root; // left and right both are not null
    }
};