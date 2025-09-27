class Solution {
  public:
    pair<int,int> getSumHelper(Node* root){
        if(!root) return {0,0};
        auto leftSum = getSumHelper(root->left);
        auto rightSum = getSumHelper(root->right);
        
        // sum including the node:
        int a = root->data + leftSum.second + rightSum.second;
        
        // sum excluding the node
        int b = max(leftSum.first, leftSum.second) + max(rightSum.first, rightSum.second);
        return {a, b};
    }
    
    int getMaxSum(Node *root) {
        // code here
        auto ans = getSumHelper(root);
        return max(ans.first, ans.second);
    }
};