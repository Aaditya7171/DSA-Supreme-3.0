class Solution
{
public:
    int nodeCount(Node *root)
    {
        if (!root)
            return 0;
        int l = nodeCount(root->left);
        int r = nodeCount(root->right);
        return 1 + l + r;
    }
    bool isCBT(Node *root, int i, int &n)
    {
        if (!root)
            return true;
        if (i > n)
            return false;
        return isCBT(root->left, 2 * i, n) && isCBT(root->right, 2 * i + 1, n);
    }
    bool isMaxOrder(Node *root)
    {
        if (!root)
            return true;
        int l = isMaxOrder(root->left);
        int r = isMaxOrder(root->right);
        int ans = false;
        if (!root->left && !root->right)
            ans = true;
        else if (root->left && !root->right)
        {
            ans = root->data > root->left->data;
        }
        else
        {
            ans = root->data > root->left->data && root->data > root->right->data;
        }
        return ans && l && r;
    }
    bool isHeap(Node *tree)
    {
        // code here
        int n = nodeCount(tree);
        int i = 1;
        return isCBT(tree, i, n) && isMaxOrder(tree);
    }
};