class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0)); // initially
        unordered_map<int, Node*> distMap;
        int minDist = INT_MAX, maxDist = INT_MIN;
        // rule-> left(-1), right(+1)
        while(!q.empty()){
            pair<Node*, int> frontPair = q.front();
            q.pop();
            Node* frontNode = frontPair.first;
            int hd = frontPair.second; // horizontal distance
            minDist = min(minDist, hd);
            maxDist = max(maxDist, hd);

            // keep overwriting the value
            distMap[hd] = frontNode;
            if(frontNode->left) q.push(make_pair(frontNode->left, hd-1));
            if(frontNode->right) q.push(make_pair(frontNode->right, hd+1));
        }
        vector<int> ans;
        for(int i = minDist; i <= maxDist; i++){
            Node* temp = distMap[i];
            ans.push_back(temp->data);
        }
        return ans;
    }
};