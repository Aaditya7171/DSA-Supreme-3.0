class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for(auto n : nums){
            freqMap[n]++;
        }
        vector<pair<int, int>> ans(freqMap.begin(), freqMap.end());
        sort(ans.begin(), ans.end(), [](auto &a, auto& b){
            return a.second > b.second;
        });
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(ans[i].first);
        }
        return res;
    }
};