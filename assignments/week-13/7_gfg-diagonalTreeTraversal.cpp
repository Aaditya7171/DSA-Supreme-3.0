class Solution {
  public:
    void diagonalTraversalHelper(Node* root, int d, map<int, vector<int>>& diagMap) {
        if(!root) return;
        diagMap[d].push_back(root->data); // add current node
        diagonalTraversalHelper(root->left, d+1, diagMap); // next diagonal (d + 1)
        diagonalTraversalHelper(root->right, d, diagMap); // same diagonal (d)
    }
    vector<int> diagonal(Node *root) {
        // code here
        // T.C. -> O(n log n), S.C. -> O(n)
        // map<int, vector<int>> diagMap;
        // diagonalTraversalHelper(root, 0, diagMap);
        // vector<int> res;
        // for(auto& d : diagMap){
        //     for(int val : d.second){
        //         res.push_back(val);
        //     }
        // }
        // return res;
        
        // O(n) solution -> level order traversal 
        if(!root) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp = q.front(); q.pop();
            while(temp){
                ans.push_back(temp->data);
                if(temp->left){
                    q.push(temp->left); // bad me dekhenge
                }
                temp = temp->right; // next right node in the same diagonal
            }
        }
        return ans;
    }
};