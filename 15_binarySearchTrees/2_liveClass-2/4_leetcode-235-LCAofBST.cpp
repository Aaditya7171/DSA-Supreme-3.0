class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // // Appraoach 1-> T.C. -> O(n)
        // if(!root) return NULL;
        // if(root->val == p->val) return p;
        // if(root->val == q->val) return q;
        // TreeNode* left = lowestCommonAncestor(root->left, p, q);
        // TreeNode* right = lowestCommonAncestor(root->right, p, q);
        // if(!left && !right) return NULL;
        // else if(left && !right) return left;
        // else if(!left && right) return right;
        // else return root;

        // Approach 2: AVG case -> O(logn)
        if(!root) return NULL;
        // Case A: p and q both are on left side
        if(p->val < root->val && q->val < root->val){
            TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
            if(leftAns) return leftAns;
        }
        // Case B: p and q both are on right side
        if(p->val > root->val && q->val > root->val){
            TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
            if(rightAns) return rightAns;
        }
        // Case C: p in left subtree and q in right subtree
        // Case D: q in right subtree and in right subtree
        return root;
    }
}; 