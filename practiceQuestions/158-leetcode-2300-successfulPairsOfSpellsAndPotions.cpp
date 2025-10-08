class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> ans;
        ans.reserve(spells.size());

        for (auto s : spells)
        {
            long long need = (success + s - 1) / s;
            auto it = lower_bound(potions.begin(), potions.end(), need);
            ans.push_back(m - int(it - potions.begin()));
        }
        return ans;
    }
};