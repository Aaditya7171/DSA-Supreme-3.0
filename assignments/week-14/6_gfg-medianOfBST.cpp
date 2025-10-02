int findNodeCount(Node* root) {
    // Morris Traversal
    int count = 0;
    Node* curr = root;
    while(curr){
        // If left node is NULL, then, Visit it and go right;
        if(curr->left == nullptr){
            count++;
            curr = curr->right;
        }
        // left node is not null
        else {
            // find inorder predecessor
            Node* pred = curr->left;
            while(pred->right != curr && pred->right){
                pred = pred->right;
            }
            // if pred's right node is null then go left after establishing link from predecessor to curremt
            if(pred->right == nullptr){
                pred->right = curr;
                curr = curr->left;
            } 
            else {
                // right node is not null
                // left is already visited, go right after visiting curr node white removing the link
                pred->right = nullptr;
                count++;
                curr = curr->right;
            }
        }
    }
    return count; 
}
float findActMedian(Node* root, int n) {
    // Morris Traversal
    int i = 0;
    int odd1 = (n + 1) / 2, odd1Val = -1;
    int even1 = n / 2, even1Val = -1;
    int even2 = n / 2 + 1, even2Val = -1;
    Node* curr = root;
    
    while(curr){
        // If left node is NULL, then, Visit it and go right;
        if(curr->left == nullptr){
            i++;
            if(i == odd1) odd1Val = curr->data;
            if(i == even1) even1Val = curr->data;
            if(i == even2) even2Val = curr->data;
            curr = curr->right;
        }
        // left node is not null
        else {
            // find inorder predecessor
            Node* pred = curr->left;
            while(pred->right != curr && pred->right){
                pred = pred->right;
            }
            // if pred's right node is null then go left after establishing link from predecessor to curremt
            if(pred->right == nullptr){
                pred->right = curr;
                curr = curr->left;
            } 
            else {
                // right node is not null
                // left is already visited, go right after visiting curr node white removing the link
                pred->right = nullptr;
                i++;
                if(i == odd1) odd1Val = curr->data;
                if(i == even1) even1Val = curr->data;
                if(i == even2) even2Val = curr->data;
                curr = curr->right;
            }
        }
    }
    float median = 0;
    if(n&1) median = odd1Val; 
    else median = (even1Val + even2Val) / 2.0;
    return median; 
}



float findMedian(struct Node *root) {
    // T.C. O(N), S.C. O(1)
    int n = findNodeCount(root);
    return findActMedian(root, n);
}