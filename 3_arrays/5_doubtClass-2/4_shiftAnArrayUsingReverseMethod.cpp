#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // reverse all
        reverse(nums.begin(), nums.end());

        //reverse first k
        reverse(nums.begin(), nums.begin() + k);

        //reverse first n - k
        reverse(nums.begin() + k, nums.end());
    }
};