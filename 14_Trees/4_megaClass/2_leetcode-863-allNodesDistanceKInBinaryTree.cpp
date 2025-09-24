class Solution {
public:
    // have to create child to parent mapping
    void mapParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parentMap){
        if(!root) return;
        if(root->left){
            parentMap[root->left] = root;
            mapParent(root->left, parentMap);         
        }
        if(root->right){
            parentMap[root->right] = root;
            mapParent(root->right, parentMap);         
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parentMap;
        parentMap[root] = nullptr;
        mapParent(root, parentMap); // create child to parent mapping
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target); // start from target node
        visited[target] = true;

        int currLevel = 0;
        while(!q.empty()){
            int size = q.size();
            if(currLevel == k) break; // now the answer is ready in the queue
            currLevel++;
            // processing over all nodes at the current level
            for(int i = 0; i < size; i++){
                auto front = q.front(); q.pop();
                if(front->left && (visited.find(front->left) == visited.end())){
                    // front has a left unvisited child
                    q.push(front->left);
                    visited[front->left] = true;
                }
                if(front->right && (visited.find(front->right) == visited.end())){
                    // front has a right unvisited child
                    q.push(front->right);
                    visited[front->right] = true;
                }

                // Have to process parent too
                auto parentNodeOfFront = parentMap[front];
                if(parentNodeOfFront && visited.find(parentNodeOfFront) == visited.end()){
                    // this node's parent is not visited yet so visit it and add it to the queue
                    q.push(parentNodeOfFront); 
                    visited[parentNodeOfFront] = true;
                }
            }
        }
        vector<int> ans;
        // now the queue contains all nodes which are at distance K from target
        while(!q.empty()){
            auto front = q.front(); q.pop();
            ans.push_back(front->val);
        }
        return ans;
        // time complexity: O(n)
    }
};