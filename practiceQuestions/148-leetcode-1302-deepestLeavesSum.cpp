class Solution {
public:
    int deepestSumHelper(TreeNode* root){
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int levelSum = 0;
        while(!q.empty()){
            levelSum = 0;
            int size = q.size();
            for(int i = 0; i < size; i++){
                TreeNode* front = q.front(); q.pop();
                levelSum += front->val;
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
        return levelSum;
    }
    int deepestLeavesSum(TreeNode* root) {
        return deepestSumHelper(root);
    }
};