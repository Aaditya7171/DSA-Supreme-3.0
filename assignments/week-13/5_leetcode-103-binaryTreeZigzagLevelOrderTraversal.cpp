class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        bool leftToRightDir = true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int width = q.size();
            vector<int> temp(width);
            for(int i = 0; i < width; i++){
                TreeNode* front = q.front(); q.pop();
                int index = leftToRightDir ? i : width - i - 1;
                temp[index] = front->val;
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);

            }
            // toggle the dir
            leftToRightDir = !leftToRightDir;
            ans.push_back(temp);
        }    
        // O(n)
        return ans;
    }
};