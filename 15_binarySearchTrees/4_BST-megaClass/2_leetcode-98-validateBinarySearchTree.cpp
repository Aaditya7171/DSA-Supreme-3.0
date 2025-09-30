class Solution {
public:
    void findInorder(TreeNode* root, vector<int>& inorder){
        if(!root) return;
        findInorder(root->left, inorder);
        inorder.push_back(root->val);
        findInorder(root->right, inorder);
    }

    bool validate(TreeNode* root, long long lowerBound, long long upperBound){
        if(!root) return true;
        bool isCurrentNodeInRange = root->val > lowerBound && root->val < upperBound;

        bool isLeftSubtreeBST = validate(root->left, lowerBound, root->val);
        bool isRightSubtreeBST = validate(root->right, root->val, upperBound);

        return isCurrentNodeInRange && isLeftSubtreeBST && isRightSubtreeBST;
    }
    bool isValidBST(TreeNode* root) {
        // // Approach 1--> Find inroder and check if it is sorted, if sorted then return true, false otherwise
        // vector<int> inorder;
        // findInorder(root, inorder);
        // // return is_sorted(inorder.begin(), inorder.end()); // is_sorted() allows duplicates -> testcases having duplicates failed
        // for(int i = 1; i < inorder.size(); i++){
        //     if(inorder[i] <= inorder[i - 1]) return false; 
        // }
        // return true;

        // Approach 2 --> Range checking
        long long lowerBound = LONG_MIN, upperBound = LONG_MAX;
        return validate(root, lowerBound, upperBound);
    }
};