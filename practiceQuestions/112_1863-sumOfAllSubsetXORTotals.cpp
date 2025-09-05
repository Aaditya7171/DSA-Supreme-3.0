class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int orOfAll = 0;
        for(int n : nums)
            orOfAll |= n;
        return orOfAll * ( 1 << (nums.size() - 1));
    }
};