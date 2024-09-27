#include<iostream>
#include<vector>
#include<climits>

using namespace std;


class Solution {
public:
    bool solve(vector<int> &nums, int i){
        if(i == nums.size() - 1) return true;
        if(i >= nums.size()) return false;
       
        bool recAns = false;
        for(int jump = 1; jump <= nums[i]; jump++){
            recAns = recAns || solve(nums, i + jump);
        }
        return recAns;
    }
    bool canJump(vector<int>& nums) {
        return solve(nums, 0);
    }
};