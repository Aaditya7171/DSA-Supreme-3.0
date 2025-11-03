class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        unordered_map<int, int> freqMap;
        vector<int> ans;
        for (auto num : nums)
            freqMap[num]++;
        for (auto &[number, freq] : freqMap)
            if (freq == 2)
                ans.push_back(number);
        return ans;
    }
};