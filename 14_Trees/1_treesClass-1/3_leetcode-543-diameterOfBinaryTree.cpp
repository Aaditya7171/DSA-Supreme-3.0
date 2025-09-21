class Solution {
public:
    int getHeight(TreeNode* root){
        if(!root) return 0;

        int left = getHeight(root->left);
        int right = getHeight(root->right);
        int maxHeight = max(left, right);
        return maxHeight + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        // option 1-> ans is in leftSubtree
        int option1 = diameterOfBinaryTree(root->left);
        // option 2-> ans is in rightSubtree
        int option2 = diameterOfBinaryTree(root->right);
        // option 3-> ans is height of left+right subtree
        int option3 = getHeight(root->left) + getHeight(root->right);
        return max(option1, max(option2, option3));
    }
    // t.c. O(n^2)
};