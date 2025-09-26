class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // Morris Traversal
        vector<int> ans;
        TreeNode* curr = root;
        while(curr){
            // If left node is NULL, then, Visit it and go right;
            if(curr->left == nullptr){
                ans.push_back(curr->val);
                curr = curr->right;
            }
            // left node is not null
            else {
                // find inorder predecessor
                TreeNode* pred = curr->left;
                while(pred->right != curr && pred->right){
                    pred = pred->right;
                }
                // if pred's right node is null then go left after establishing link from predecessor to curremt
                if(pred->right == nullptr){
                    pred->right = curr;
                    curr = curr->left;
                } 
                else {
                    // right node is not null
                    // left is already visited, go right after visiting curr node white removing the link
                    pred->right = nullptr;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
        return ans; 
    }
};