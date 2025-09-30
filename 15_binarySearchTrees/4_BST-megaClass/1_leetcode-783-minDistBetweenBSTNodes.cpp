class Solution {
public:
    void solve (TreeNode* root, int &ans, TreeNode* &prev){
        // Inorder traversal, not using vector space but S.C. would be still O(n), T.C. O(n)
        // as there would be rec stack, to avoid this, we can use morris traversal
        if(!root) return;
        solve(root->left, ans, prev);
        if(prev){
            ans = min(ans, root->val - prev->val);
        }
        // update prev
        prev = root;
        solve(root->right, ans, prev);
    }
    int minDiffInBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        int minDiff = INT_MAX;
        solve(root, minDiff, prev);
        return minDiff;
    }
};