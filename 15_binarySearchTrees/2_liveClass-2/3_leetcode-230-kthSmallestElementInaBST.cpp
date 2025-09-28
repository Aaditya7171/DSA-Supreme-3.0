class Solution {
public:
    void storeInorder(TreeNode* root, vector<int>& inorder){
        if(!root) return;
        storeInorder(root->left, inorder);
        inorder.push_back(root->val);
        storeInorder(root->right, inorder);
    }
    void solve(TreeNode* root, int& k, TreeNode* &ans){
        if(!root) return;
        solve(root->left, k, ans);
        k--;
        if(k == 0) {
            ans = root;
            return;
        }
        solve(root->right, k, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        // if(!root) return 0;
        // vector<int> inorder;
        // storeInorder(root, inorder); 
        // return inorder[k-1];

        // recursive approach
        TreeNode* ans;
        solve(root, k, ans);
        return ans->val;
    }
};