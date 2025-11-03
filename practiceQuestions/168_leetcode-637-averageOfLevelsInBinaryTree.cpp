class Solution
{
public:
    void solve(TreeNode *root, vector<double> &ans)
    {
        if (!root)
            return;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            double avgLevelSum = 0;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *front = q.front();
                q.pop();
                avgLevelSum += front->val;
                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }
            ans.push_back(avgLevelSum / size);
        }
    }
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> ans;
        solve(root, ans);
        return ans;
    }
};