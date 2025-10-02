class Solution {
  public:
    void deadEndHelper(Node* root, unordered_map<int, bool> &visited, bool &ans){
        if(!root) return;
        // visit the node
        visited[root->data] = true;
        if(!root->left && !root->right){
            // leaf node, check if it is a dead end
            int xp1 = root->data + 1;
            // if 1 found at the leaf then it'll be the dead end
            int xm1 = root->data - 1 == 0 ? root->data : root->data - 1;
            if(visited.find(xp1) != visited.end() && visited.find(xm1) != visited.end()){
                ans = true;
                return;
            }
        }
        deadEndHelper(root->left, visited, ans);
        deadEndHelper(root->right, visited, ans);
    }
    bool isDeadEnd(Node *root) {
        // Code here
        bool ans = false;
        unordered_map<int, bool> visited;
        deadEndHelper(root, visited, ans);
        return ans;
    }
};