
#include <iostream>
class Solution
{
public:
    bool solve(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        bool nullFound = false;
        while (!q.empty())
        {
            TreeNode *front = q.front();
            q.pop();
            if (front == NULL)
            {
                nullFound = true;
            }
            // front is valid
            else
            {
                if (nullFound == true)
                    return false;
                else
                {
                    // may be a cbt, continue processing
                    q.push(front->left);
                    q.push(front->right);
                }
            }
        }
        return true;
    }
    bool isCompleteTree(TreeNode *root)
    {
        bool ans = solve(root);
        return ans;
    }
};