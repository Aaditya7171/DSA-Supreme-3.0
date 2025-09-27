class Solution {
public:
    vector<TreeNode*> ans;
    unordered_map<string, int> subTreeMap;
    string preorder(TreeNode* root){
        if(!root) return "N";
        string currNode = to_string(root->val); // making string of current node
        string leftString = preorder(root->left);
        string rightString = preorder(root->right);
        string s = currNode + "," + leftString + ","  + rightString;
        if(subTreeMap.find(s) != subTreeMap.end()){
            if(subTreeMap[s] == 1) ans.push_back(root);
            subTreeMap[s]++;
        }
        else {
            subTreeMap[s] = 1;
        }
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        preorder(root);
        return ans;
    }
};