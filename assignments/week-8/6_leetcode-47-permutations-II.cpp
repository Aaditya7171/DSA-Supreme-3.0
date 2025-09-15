class Solution {
public:
    void uniquePermutations(vector<int>& nums, vector<vector<int>>& ans, int start){
        if(start == nums.size()){
            ans.push_back(nums);
            return;  
        }
        unordered_map<int, bool> visited;
        for(int i = start; i < nums.size(); i++){
            if(visited.find(nums[i]) != visited.end()){
                continue; // if already true in map then don't swap
            }
            visited[nums[i]] = true; 
            swap(nums[i], nums[start]);
            uniquePermutations(nums, ans, start  + 1);
            swap(nums[i], nums[start]); // backtracking
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        uniquePermutations(nums, ans, 0);
        return ans;
    }
};