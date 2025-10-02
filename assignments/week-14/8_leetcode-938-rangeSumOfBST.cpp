class Solution {
public:
    void findInorder(TreeNode* root, vector<int>& in, int &sum, int& low, int& high){
        if(!root) return;
        findInorder(root->left, in, sum, low, high);
        if(root->val >= low && root->val <= high) sum += root->val;
        findInorder(root->right, in, sum, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        // // T.C. O(N)-> Both Avg and Worst cases
        // vector<int> in;
        // int sum = 0;
        // findInorder(root, in, sum, low, high);
        // return sum;

        // // T.C. O(N)-> Worst case: O(n), Avg case: O(height)
        if(!root) return 0;
        int ans = 0;
        bool wasInRange = false;
        if(root->val >= low && root->val <= high){
            wasInRange = true;
            ans += root->val;
        }
        if(wasInRange){
            ans += rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }
        else if(root->val < low){
            ans += rangeSumBST(root->right, low, high);
        }
        else if(root->val > high){
            ans += rangeSumBST(root->left, low, high);
        }
        return ans;
    }
};