class Solution {
public:
    int getHeight(TreeNode* root){
        if(!root) return 0;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        int maxHeight = max(left, right);
        return maxHeight + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        // check current node
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        int absDiff = abs(leftHeight - rightHeight);
        bool status = (absDiff <= 1);

        // checking for leftSubtree and rightSubtree by recusrive call
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);
        // when leftSubtree, rightSubtree and curr node is balanced then say
        // we can that tree is balanced
        if(status && leftAns && rightAns) return true;
        return false;
    }
};