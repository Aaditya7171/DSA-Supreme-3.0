class Solution {
  public:
  
    void leftBoundary(Node* root, vector<int>& ans){
        if(!root || (!root->left && !root->right)) return;
        ans.push_back(root->data);
        if(root->left){
            leftBoundary(root->left, ans);
        } else {
            leftBoundary(root->right, ans);
        }
    }
    
    void leafBoundary(Node* root, vector<int>& ans){
        if(!root) return;
        if(!root->left && !root->right){
            ans.push_back(root->data);
        }
        leafBoundary(root->left, ans);
        leafBoundary(root->right, ans);
    }
    
    void rightBoundary(Node* root, vector<int>& ans){
        if(!root || (!root->left && !root->right)) return;
        if(root->right){
            rightBoundary(root->right, ans);
        } else {
            rightBoundary(root->left, ans);
        }
        // we have to store reverse order
        ans.push_back(root->data);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(!root) return ans;
        // Part A-> root node
        ans.push_back(root->data);
        // Part B-> left subtree->left boundary
        leftBoundary(root->left, ans);
        // Part C-> left subtree->leaf boudary
        leafBoundary(root->left, ans);
        // Part D-> right subtree->leaf boundary
        leafBoundary(root->right, ans);
        // Part E-> right subtree->right boundary
        rightBoundary(root->right, ans);
        
        return ans;
    }
};