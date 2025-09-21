class Solution {
public:
    int maxDepth(TreeNode* root) {
        // base case
        if(!root) return 0;
        
        int leftSubtreeHeight = maxDepth(root->left);
        int rightSubtreeHeight = maxDepth(root->right);
        int maxHeight = max(leftSubtreeHeight, rightSubtreeHeight);
        int totalHeight = maxHeight + 1;
        return totalHeight;
    }
};