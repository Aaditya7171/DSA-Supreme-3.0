class Solution {
  public:
    Node* makeNodeToParentMappingAndFindTarget(Node* root, unordered_map<Node*, Node*>& parentMap, int target){
        queue<Node*> q;
        Node* targetNode = 0;
        q.push(root);
        parentMap[root] = 0;
        while(!q.empty()){
            Node* front = q.front(); q.pop();
            if(front->data == target){
                targetNode = front; // values are unique so no need to worry about duplicate
            }
            if(front->left) {
                q.push(front->left);
                parentMap[front->left] = front;
            }
            if(front->right) {
                q.push(front->right);
                parentMap[front->right] = front;
            } 
        }
        return targetNode;
    }
    
    int burnTheTree(Node* targetNode, unordered_map<Node*, Node*>& parentMap){
        unordered_map<Node*, bool> isBurnt;
        queue<Node*> q; // currently set on fire nodes
        int t = 0;
        q.push(targetNode);
        isBurnt[targetNode] = 1;
        while(!q.empty()){
            int size = q.size();
            bool isFireSpreaded = 0;
            for(int i = 0; i < size; i++){
                Node* front = q.front(); q.pop();
                if(front->left && !isBurnt[front->left]){
                    q.push(front->left);
                    isBurnt[front->left] = 1;
                    isFireSpreaded = 1; // agr fire spread ho rahi hai tabhi time inc hoga
                }
                if(front->right && !isBurnt[front->right]){
                    q.push(front->right);
                    isBurnt[front->right] = 1;
                    isFireSpreaded = 1;
                }
                if(parentMap[front] && !isBurnt[parentMap[front]]){
                    q.push(parentMap[front]);
                    isBurnt[parentMap[front]] = 1;
                    isFireSpreaded = 1; 
                }
            }
            if(isFireSpreaded) ++t;
        }
        return t;
    }    
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*, Node*> parentMap; // stores Nodes to parent pointers
        Node* targetNode = makeNodeToParentMappingAndFindTarget(root, parentMap, target);
        return burnTheTree(targetNode, parentMap);
    }
};