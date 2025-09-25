class Solution {
public:
    bool isbalanced = true;
    int getHeight(TreeNode* root){
        if(!root) return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        // check for curr node->is it balanced
        if(isbalanced && abs(lh-rh) > 1){
            isbalanced = false;
        }
        return max(lh, rh) + 1;
    } 

    bool isBalanced(TreeNode* root) {
        // t.c. -> O(n)
        getHeight(root);
        return isbalanced;
    }
};