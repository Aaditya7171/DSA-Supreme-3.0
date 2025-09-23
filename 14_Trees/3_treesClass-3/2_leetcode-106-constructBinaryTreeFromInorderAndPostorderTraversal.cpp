class Solution {
public:
    void createMapping(unordered_map<int,int>& valueToIndex, vector<int> inorder){
        for(int i = 0; i  < inorder.size(); i++){
            int elem = inorder[i];
            valueToIndex[elem] = i;
        }
    }

    TreeNode* constructTree(unordered_map<int, int>& valMap, vector<int>& postorder, vector<int>& inorder, int& pIndex, int inorderStart, int inorderEnd){
        if(pIndex < 0 || inorderStart > inorderEnd) return NULL;
        
        int elem = postorder[pIndex--];
        TreeNode* root = new TreeNode(elem);
        int index = valMap[elem];

        // right call
        root->right = constructTree(valMap, postorder, inorder, pIndex, index+1, inorderEnd);
        // left call
        root->left = constructTree(valMap, postorder, inorder, pIndex, inorderStart, index-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int pIndex = postorder.size()-1;
        unordered_map<int,int> valMap;
        createMapping(valMap, inorder);
        TreeNode* root = constructTree(valMap, postorder, inorder, pIndex, 0, inorder.size()-1);

        return root;
    }
};