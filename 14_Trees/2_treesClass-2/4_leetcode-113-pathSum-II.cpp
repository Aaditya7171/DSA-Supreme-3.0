class Solution {
public:
    void solve (TreeNode* root, int &target, int sum, vector<int>& path, vector<vector<int>>& ans){
        if(!root) return;

        // step 1: push val into path of curr node
        sum = sum + root->val;
        path.push_back(root->val);

        // step 2: check for leaf node
        if(root->left == NULL && root->right == NULL){
            if(sum == target) {
                ans.push_back(path);
            }
            path.pop_back();
            return;
        }

        // find left and right ans
        solve(root->left, target, sum, path, ans);
        solve(root->right, target, sum, path, ans);

        // if "path" is passed by reference then we need to backtrack
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        vector<int> path;
        vector<vector<int>> ans;  

        solve(root, targetSum, sum, path, ans);
        return ans;
    }
};