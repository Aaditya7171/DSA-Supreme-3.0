class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            vector<TreeNode*> currLevel;
            for(int i = 0; i < size; i++){
                TreeNode* front = q.front(); q.pop();
                currLevel.push_back(front);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            // If odd level, reverse the values
            if(level % 2 == 1){
                int left = 0, right = currLevel.size() - 1;
                while(left < right)
                    swap(currLevel[left++]->val, currLevel[right--]->val);
            }
            level++;
        }
        return root;
    }
};