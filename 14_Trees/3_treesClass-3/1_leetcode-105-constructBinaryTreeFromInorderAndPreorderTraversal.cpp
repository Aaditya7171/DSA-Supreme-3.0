/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void createMapping(unordered_map<int,int>& valueToIndex, vector<int> inorder){
        for(int i = 0; i  < inorder.size(); i++){
            int elem = inorder[i];
            valueToIndex[elem] = i;
        }
    }
    int getIndexInorder(vector<int> inorder, int target){
        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == target){
                return i;
            }
        }
        return -1;
        // causing O(n^2)->searching for an element in every call
    }

    TreeNode* constructBinaryTree(unordered_map<int,int>& valMap, vector<int>& preorder, vector<int>& inorder, int &pIndex, int inorderStart, int inorderEnd, int size) {
        // base cases
        if(pIndex >= size) return NULL;
        if(inorderStart > inorderEnd) return NULL;

        // step 1: process the first element of preorder as root node
        int elem = preorder[pIndex++];
        TreeNode* root = new TreeNode(elem);

        // step 2: find this element inside inorder and call for left and right
        // int elemIndexInorder = getIndexInorder(inorder, elem);->O(n)
        // using mapping instead
        int elemIndexInorder = valMap[elem];//O(1)
        // left part -> inorderStart to elemIndexInorder-1
        root->left = constructBinaryTree(valMap, preorder, inorder, pIndex, inorderStart, elemIndexInorder-1, size);
        // right part -> elemIndexInorder+1 to inorderEnd
        root->right = constructBinaryTree(valMap, preorder, inorder, pIndex, elemIndexInorder+1, inorderEnd, size);

        return root;
        //T.C.--> O(n^2) (wihout using map)
        //T.C.--> O(n) (after using map)
    }
      
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pIndex = 0;
        unordered_map<int, int> valMap;
        createMapping(valMap, inorder);
        TreeNode* root = constructBinaryTree(valMap, preorder, inorder, pIndex, 0, inorder.size()-1, inorder.size());
        return root;
    }
};