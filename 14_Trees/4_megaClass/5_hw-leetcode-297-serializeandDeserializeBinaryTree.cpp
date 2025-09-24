class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "null,"; // if null then add null and comma
        // else add value of the node and call for left and right
        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }
    
    TreeNode* deserializeHelper(queue<string>& q){
        // get first element from queue and pop it out
        string val = q.front(); q.pop();
        if(val == "null") return nullptr; 
        TreeNode* node = new TreeNode(stoi(val)); 
        node->left = deserializeHelper(q);
        node->right = deserializeHelper(q);
        return node;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string token;
        stringstream ss(data); 
        // push all elements in queue by splitting them using , as delimiter
        while(getline(ss, token, ',')){
            if(!token.empty()) q.push(token);
        }
        return deserializeHelper(q);
    }
};
