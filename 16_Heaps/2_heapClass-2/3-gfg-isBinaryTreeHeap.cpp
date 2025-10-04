class Solution
{
public:
    bool checkCompleteness(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        bool nullFound = false;
        while (!q.empty())
        {
            Node *front = q.front();
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
    bool checkMaxProperty(Node *root)
    {
        if (!root)
            return true;
        if (!root->left && !root->right)
            return true;

        bool leftAns = checkMaxProperty(root->left);
        bool rightAns = checkMaxProperty(root->right);

        bool option1 = true;
        if (root->right && root->data < root->right->data)
            option1 = false;
        bool option2 = true;
        if (root->left && root->data < root->left->data)
            option2 = false;

        return leftAns && rightAns && option1 && option2;
    }
    bool isHeap(Node *tree)
    {
        bool completeness = checkCompleteness(tree);
        bool maxProperty = checkMaxProperty(tree);
        return completeness && maxProperty;
    }
};