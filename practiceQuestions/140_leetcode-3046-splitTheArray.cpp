class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> freqMap;
        for (auto n : nums)
            freqMap[n]++;
        for (auto f : freqMap)
            if(f.second > 2) return false;
        return true;
    }
};