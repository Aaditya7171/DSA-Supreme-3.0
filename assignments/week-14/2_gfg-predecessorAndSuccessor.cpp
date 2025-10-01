class Solution {
  public:
    Node* inOrderSuccessor(Node *root, int x) {
        Node* succ = NULL;
        Node* curr = root;
        while(curr){
            if(curr->data > x){
                succ = curr;
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
        return succ;
    }
    Node* inOrderPredessor(Node *root, int x) {
        // Your code here
        Node* pred = NULL;
        Node* curr = root;
        while(curr){
            if(curr->data < x){
                pred = curr;
                curr = curr->right;
            }
            else {
                curr = curr->left;
            }
        }
        return pred;
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<Node*> ans;
        Node* succ = inOrderSuccessor(root, key);
        Node* pred = inOrderPredessor(root, key);
        
        ans.push_back(pred);
        ans.push_back(succ);
        return ans;
    }
};