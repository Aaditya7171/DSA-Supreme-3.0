#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int n, int i){
        if(i >= n) return 0;
        //Include
        int incAns = nums[i] + solve(nums, n, i+2);
        //Exclude
        int excAns = 0 + solve(nums, n, i+1);

        return max(incAns, excAns);

    }
    int rob(vector<int>& nums) {
        int index = 0;
        int ans = solve(nums, nums.size(), index);
        return ans;
    }
};