class BSTIterator {
    stack<TreeNode*> st;
    void pushLeftNodes(TreeNode* root){
        while(root){
            st.push(root);
            root = root->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushLeftNodes(root);
    }
    
    int next() {
        auto topElem = st.top(); st.pop();
        if(topElem->right){
            pushLeftNodes(topElem->right);
        }
        return topElem->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};