class Solution {
public:
    int getMax(TreeNode* root){
        while(root->right)
            root = root->right;
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;

        if(root->val == key) {
            // Node found->need to be deleted
            // 4 cases
            // 1-> with 0 child
            if(!root->left && !root->right) {
                delete root;
                return nullptr;
            }
            // 2-> with left child only
            else if(root->left && !root->right) {
                TreeNode* leftChild = root->left; // save the child
                root->left = nullptr; // isolate the node
                delete root;
                return leftChild;
            }
            // 3-> with right child only
            else if(!root->left && root->right) {
                TreeNode* rightChild = root->right; 
                root->right = nullptr; 
                delete root;
                return rightChild;
            }
            // 4-> with both left and right childrens
            if(root->left && root->right) {
                // find just smaller elem from left subtree
                int maxVal = getMax(root->left);
                // replace root node's val with maxVal
                root->val = maxVal;
                // maxVal is copies, delete actual node
                root->left = deleteNode(root->left, maxVal);
                return root;
            }    
        }
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        else 
            root->left = deleteNode(root->left, key);
        return root;
    }
};