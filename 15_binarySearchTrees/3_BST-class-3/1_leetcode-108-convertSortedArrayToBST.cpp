class Solution {
public:
    TreeNode* solve(vector<int>& inorder, int s, int e){
        if(s > e) return NULL;
        int mid = (s + e) / 2;
        // 1 case for mid
        int elem = inorder[mid];
        TreeNode* root = new TreeNode(elem);
        // recursive call for left and right subtree
        root->left = solve(inorder, s, mid-1);
        root->right = solve(inorder, mid + 1, e);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        TreeNode* root = solve(nums, s, e);
        return root;
    }
};