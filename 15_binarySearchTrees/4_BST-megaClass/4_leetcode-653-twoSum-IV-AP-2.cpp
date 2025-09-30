class BSTIterator {
    stack<TreeNode*> st;
    stack<TreeNode*> revSt;
    void pushLeftNodes(TreeNode* root){
        while(root){
            st.push(root);
            root = root->left;
        }
    }
    void pushRightNodes(TreeNode* root){
        while(root){
            revSt.push(root);
            root = root->right;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushLeftNodes(root);
        pushRightNodes(root);
    }
    
    int next() {
        auto topElem = st.top(); st.pop();
        if(topElem->right){
            pushLeftNodes(topElem->right);
        }
        return topElem->val;
    }

    int before() {
        auto topElem = revSt.top(); revSt.pop();
        if(topElem->left){
            pushRightNodes(topElem->left);
        }
        return topElem->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }

    bool hasBefore() {
        return !revSt.empty();
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        // Approach2: Without storing the elements
        // AVG case-> S.C. o(height), Worst case O(n), T.c. O(n)
        if(!root) return false;
        BSTIterator it(root);

        int i = it.next(); // iterates left to right
        int j = it.before(); // iterates right to left

        while(i < j){
            if(i + j == k) return true;
            else if(i + j < k){
                i = it.next();
            }
            else {
                j = it.before();
            }
        }
        return false;
    }
};