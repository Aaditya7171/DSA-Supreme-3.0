class Info{
    public: 
        int minVal;
        int maxVal;
        int sum;
        bool isBST;
};
class Solution {
public:
    Info solve(TreeNode* root, int& sum){
        // base case
        if(!root){
            Info temp;
            temp.minVal = INT_MAX;
            temp.maxVal = INT_MIN;
            temp.sum = 0;
            temp.isBST = true;
            sum = max(sum, temp.sum);
            return temp;
        }
        // // leaf node case
        // if(!root->left && !root->right){
        //     Info temp;
        //     temp.minVal = root->val;
        //     temp.maxVal = root->val;
        //     temp.sum = root->val;
        //     temp.isBST = true;
        //     sum = max(sum, temp.sum);
        //     return temp;
        // }
        // Left and Right recursive calls
        Info leftAns = solve(root->left, sum);
        Info rightAns = solve(root->right, sum);
        // Current Node calculation
        Info currentAns;
        currentAns.minVal = min(leftAns.minVal, min(rightAns.minVal, root->val));
        currentAns.maxVal = max(leftAns.maxVal, max(rightAns.maxVal, root->val));
        currentAns.sum = leftAns.sum + rightAns.sum + root->val;
        currentAns.isBST = (root->val > leftAns.maxVal && root->val < rightAns.minVal && leftAns.isBST && rightAns.isBST);
        
        // whenever a bst is found, update the global variable with it's sum
        if(currentAns.isBST){
            sum = max(sum, currentAns.sum);
        }
        return currentAns;
    }
    int maxSumBST(TreeNode* root) {
        int sum = 0;
        solve(root, sum);
        return sum;
    }
};