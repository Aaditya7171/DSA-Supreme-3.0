#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, int i,  std::vector<std::vector<int>> &ans){
        if(i >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j = i; j < nums.size(); j++){
            swap(nums[i], nums[j]);
            solve(nums, i+1, ans);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        solve(nums, 0, ans);
        return ans;
    }
};

int main(){
    std::vector<int> nums = {1,2,3};
    Solution sol;
    std::vector<std::vector<int>> res = sol.permute(nums);

    for(auto i : res){
        for(auto j : i){
            std::cout << j <<" ";
        }
        std::cout << "\n";
    }
}