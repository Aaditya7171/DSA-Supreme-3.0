class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int, int>>> q; // node, {row, col}
        q.push({root, {0, 0}});
        map<int, map<int, multiset<int>>> mp; // have to print top to bottem: col-> {row, [x, y, z...]}
        while(!q.empty()){
            auto front = q.front(); q.pop();
            TreeNode* &node = front.first;
            auto& coordinate = front.second;
            int& row = coordinate.first;
            int& col = coordinate.second;
            mp[col][row].insert(node->val);
            if(node->left){
                q.push({node->left, {row+1, col-1}});
            }
            if(node->right){
                q.push({node->right, {row+1, col+1}});
            }
        }
        // store final vertical order into ans vector
        for(auto it:mp){ // col-wise sorted -> left to right
            auto& colMap = it.second;
            vector<int> verLine;
            for(auto colMapIt : colMap){ // row-wise sorted -> top to bottem
                auto& multiSet = colMapIt.second;
                verLine.insert(verLine.end(), multiSet.begin(), multiSet.end()); // insert all the elements of one row
            }
            ans.push_back(verLine);
        }
        return ans;
    }
};