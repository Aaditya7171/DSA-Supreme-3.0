#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
        Node(int val){
            this->data = val;
            left = NULL;
            right = NULL;
        }
};

Node* buildBST(int val, Node* root){
    if(!root) {
        root = new Node(val); // if no root is present then make a new one
        return root;
    }

    else{
        if(val < root->data){
            // left subtree
            root->left = buildBST(val, root->left);
        } 
        else {
            // right subtree
            root->right = buildBST(val, root->right);
        }
    }
    return root;
}

Node* createTree(){
    cout << "Enter the root node : " << endl;
    int val;
    cin >> val;
    Node* root = nullptr;

    while(val != -1){
        root = buildBST(val, root);
        cout << "Enter the next value : " << endl;
        cin >> val;
    }
    return root;
}

void preorderTraversal(Node* root){
    if(!root) return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(!root) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(!root) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

// for printing the tree
void levelorderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front(); q.pop();
        if(front == NULL){
            cout << endl;
            if(!q.empty()) q.push(NULL);
        } 
        else{
            cout << front->data << " ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
}

int getMin(Node* root){
    if(!root) return -1;
    while(root->left){
        root = root->left;
    }
    // root is at extreme left
    return root->data;
}

int getMax(Node* root){
    if(!root) return -1;
    while(root->right){
        root = root->right;
    }
    // root is at exteme right
    return root->data;
}

bool searchBST(Node* root, int target){
    if(!root) return false;
    while(root){
        if(root->data == target){
            return true;
        }
        else if(target < root->data){
            root = root->left;
        } 
        else if(target > root->data){
            root = root->right;
        }
    }
    return false;
}
// searching complexity -> O(logn)-> AVG case/best case
// O(n)->worst case

bool searchBSTRecursive(Node* root, int target){
    if(!root) return false;
    if(root->data == target) return true;
    else if(target < root->data)
        return searchBSTRecursive(root->left, target);
    else
        return searchBSTRecursive(root->right, target);
}

int main(){
    Node* root = createTree();
    cout << "Printing BST in Level Order Traversal : " << endl;
    levelorderTraversal(root);
    // cout << endl << "Printing BST in inorder traversal : " << endl;
    // // note-> inorder traversal of bst gives sorted order
    // inorderTraversal(root);
    // cout << endl << "Printing BST in preorder traversal : " << endl;
    // preorderTraversal(root);
    // cout << endl << "Printing BST in postorder traversal : " << endl;
    // postorderTraversal(root);
    // cout << endl << "Minimum element of BST: " << getMin(root) << endl;
    // cout << "Maximum element of BST: " << getMax(root) << endl;
    int target;
    cin >> target;
    cout << "Search in BST: " << searchBSTRecursive(root, target);
    
    return 0;
}