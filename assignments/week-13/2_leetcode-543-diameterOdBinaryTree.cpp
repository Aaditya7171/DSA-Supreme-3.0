class Solution {
public:
    int diameter = 0;
    int getHeight(TreeNode* root){
        if(!root) return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        int currDiameter = lh + rh;
        diameter = max(diameter, currDiameter);
        return max(lh, rh) + 1;  
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        getHeight(root);
        return diameter;
    }
    // t.c. O(n)
};