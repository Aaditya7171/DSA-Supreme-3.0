class Solution {
public:
    void storeInorderTraversal(TreeNode* root, vector<int>& inorder){
        if(!root) return;
        storeInorderTraversal(root->left, inorder);
        inorder.push_back(root->val);
        storeInorderTraversal(root->right, inorder);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        storeInorderTraversal(root, inorder);
        int l = 0, r = inorder.size() - 1;
        while(l < r){
            if(inorder[l] + inorder[r] == k)
                return true;
            else if(inorder[l] + inorder[r] < k)
                l++;
            else
                r--;
        }
        return false;
        // T.C. O(n), S.C. O(n)
    }
};