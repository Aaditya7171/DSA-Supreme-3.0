class Solution {
public:
  
    int findLeftHeight(TreeNode* root){
        int count = 0;
        while(root){
            count++;
            root = root->left;
        }
        return count;
    }
    int findRightHeight(TreeNode* root){
        int count = 0;
        while(root){
            count++;
            root = root->right;
        }
        return count;
    } 
    int countNodes(TreeNode* root) {
        if(!root) return 0;

        int leftHeight = findLeftHeight(root); // O(log n)
        int rightHeight = findRightHeight(root); // O(log n)

        if(leftHeight == rightHeight){
            return (1 << leftHeight) - 1; // 2^leftHeight-1
        }
        // if leftHeight != rightHeight-> ans = 1 + leftAns + rightAns
        int leftAns = countNodes(root->left);
        int rightAns = countNodes(root->right);
        return 1 + leftAns + rightAns;
        // Time Complexity: O(logn * logn)
    }
};