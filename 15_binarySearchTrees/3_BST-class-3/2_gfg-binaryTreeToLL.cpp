class Solution {
  public:
    void bToDLLHelper(Node* root, Node* &head){
        if(!root) return;
        // reverse inorder-> RNL
        bToDLLHelper(root->right, head);
        // can assume that right part's linked list is ready
        // and head of the LL will be at start node of LL
        // so connect the head with root
        root-> right = head;
        if(head) head->left = root;
        // till there, the R and N's linked list is ready, update the head
        head = root;
        // now the left part of tree is pending
        bToDLLHelper(root->left, head);
    }
    void helper(Node* root, Node* & head, Node* &tail){
        // Inorder-> LNR
        if(!root) return;
        helper(root->left, head, tail);
        // Now we can assume that left LL is ready
        // update head and tail
        // and connect root node to left LL
        if(tail){
            tail->right = root;
            root->left = tail;
            tail = root;
        }
        else{
            head = root;
            tail = root;
        }
        helper(root->right, head, tail);
        
        
    }
    Node* bToDLL(Node* root) {
        // code here
        // // Reverse Inorder
        // Node* head = NULL;
        // bToDLLHelper(root, head);
        // return head;
        
        // Inorder
        Node* head = NULL;
        Node* tail = NULL;
        helper(root, head, tail);
        return head;
    }
};