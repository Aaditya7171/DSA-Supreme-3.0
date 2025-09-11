class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = 0, nextAvailable = -1;
        for(auto n : nums){
            nextAvailable = max(nextAvailable + 1, n);
            m += nextAvailable - n;
            // if n = 3, nextAvailable(will be increamented by 1 in each iteration) = 5, then total moves will be -> (5-3) 
        }
        return m;
    }
};