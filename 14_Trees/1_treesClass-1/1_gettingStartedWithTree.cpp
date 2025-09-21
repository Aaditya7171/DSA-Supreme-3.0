#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node (int val){
		this->data = val;
		left = NULL;
		right = NULL;
	}
};

Node* createTree() {
	cout << "Enter the value for node: ";
	int value;
	cin >> value;
	if(value == -1){
		return NULL;
	} else{
		// got a valid value
		Node* root = new Node(value);
		cout << "Adding left child for: " << value << endl;
		root->left =createTree();
		cout << "Adding right child for: " << value << endl;
		root->right = createTree();
		return root;
	}
}

void preorderTraversal(Node* root) {
	if(root==NULL){
		return;
	}
	// NLR
	cout << root->data << " ";// N
	preorderTraversal(root->left); // left subtree
	preorderTraversal(root->right);// right subtree
}

void inorderTraversal(Node* root) {
	if(root==NULL){
		return;
	}
	// LNR
	inorderTraversal(root->left); // left subtree
	cout << root->data << " "; // N
	inorderTraversal(root->right);// right subtree
}

void postorderTraversal(Node* root) {
	if(root==NULL){
		return;
	}
	// LRN
	postorderTraversal(root->left); // left subtree
	postorderTraversal(root->right);// right subtree
	cout << root->data << " "; // N
}

void levelorderTraversal(Node* root){
	if(root==NULL){
		return;
	}
	queue<Node*> q; // initial state maintain
	q.push(root);
	q.push(NULL); // separator
	while(!q.empty()){
		Node* front = q.front();
		q.pop();
		if(front==NULL){
			// current level has been traversed completely
			cout << endl;
			if(!q.empty()){ // if there are still nodes to be printed
				q.push(NULL);
			}
		}
		else {
    		// take data from the front of the queue and print it
			cout << front->data <<" ";

			// ab iske bache khalo(insert the child in the queue)
			if(front->left){
				q.push(front->left);
			}
			if(front->right){
				q.push(front->right);
			}
		}
	}
}

int main(){
	Node* root;
	root = createTree();

	cout << "Printing root: " << root->data << " ";

	cout << "\nPreorder Traversal: \n";
	preorderTraversal(root);
	cout << "\nInorder Traversal: \n";
	inorderTraversal(root);
	cout << "\nPostorder Traversal: \n";
	postorderTraversal(root);
	cout << "\nLevelorder Traversal: \n";
	levelorderTraversal(root);

    return 0;
} 