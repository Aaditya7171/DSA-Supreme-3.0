class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = n / 3;
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto n : nums){
            mp[n]++;
        }
        for(auto i : mp){
            if(i.second > count){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};