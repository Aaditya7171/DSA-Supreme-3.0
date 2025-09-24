class Solution {
public:
    int solve(TreeNode* root, int& cameras){
        // null nodes are assumed to be covered
        if(!root) return 1;

        int left = solve(root->left, cameras);
        int right = solve(root->right, cameras);

        if(left == 0 || right == 0){
            // either nodes are not covered
            cameras++;
            return 2; // my cam is installed
        }
        if(left == 2 || right == 2){
            // already covered by my child
            return 1;
        }
        return 0; // i'm not covered 
    }

    int minCameraCover(TreeNode* root) {
        int cameras = 0;
        int rootState = solve(root, cameras);
        if(rootState == 0) cameras += 1; // for signle node
        return cameras;
    }
};