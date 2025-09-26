class Solution {
public:
    int findSum(TreeNode* root, int currSum){
        if(!root) return 0;
        // Build the number up to this node
        currSum = currSum * 10 + root->val;
        // If it's a leaf, return the number
        if(!root->left && !root->right){
            return currSum;
        }
        return findSum(root->left, currSum) + findSum(root->right, currSum);
    }
    int sumNumbers(TreeNode* root) {
        return findSum(root, 0);
    }
};