#include<vector>
#include<algorithm>

class Solution {
public:
    int findMin(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};