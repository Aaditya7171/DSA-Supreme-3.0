class Solution {
public:
    void storeInorder(TreeNode* root, vector<int>& inorder){
        if(!root) return;
        storeInorder(root->left, inorder);
        inorder.push_back(root->val);
        storeInorder(root->right, inorder);
    }

    void updateTree(TreeNode* root, vector<int>& inorder, int& index){
        if(!root) return;
        updateTree(root->left, inorder, index);
        root->val = inorder[index++];
        updateTree(root->right, inorder, index);
    }

    TreeNode* bstToGst(TreeNode* root) {
        if(!root) return nullptr;
        if(!root->left && !root->right) return root;
        vector<int> inorder;
        // step 1: stpre inorder
        storeInorder(root, inorder);
        // step 2: update inorder as per question rules
        for(int i = inorder.size() - 1; i >= 0; i--){
            int currentValue = inorder[i];
            int nextValue = 0;
            if(i + 1 < inorder.size())
                nextValue = inorder[i+1];
            int sum = currentValue + nextValue;
            inorder[i] = sum; // replacing the value
        }
        // step 3: update tree using inorder
        int index = 0;
        updateTree(root, inorder, index);
        return root;
    }
};