class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int maxFreq = 0;
        for(auto n : nums){
            freqMap[n]++;
            maxFreq = max(freqMap[n], maxFreq);
        }
        int ans = 0;
        for(auto& f : freqMap){
            if(f.second == maxFreq) ans += f.second;
        }
        return ans;
    }
};