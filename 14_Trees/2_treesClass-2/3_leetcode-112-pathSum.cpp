class Solution {
public:
    bool solve (TreeNode* root, int target, int sum){
        // base case
        if(!root) return false;

        // 1 case
        // root is not null
        sum = sum + root->val;
        if(root->left == NULL && root->right == NULL){
            // leaf node
            if(sum == target) return true;
            else return false;
        }
        // recursive call
        bool leftAns = solve(root->left, target, sum);
        bool rightAns = solve(root->right, target, sum);
        return leftAns || rightAns;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = solve(root, targetSum, sum);
        // t.c. O(N)
        return ans;
    }
};