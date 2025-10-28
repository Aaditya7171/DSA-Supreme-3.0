class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = s.size(), m = p.size();
        vector<int> freqP(26, 0), freqW(26, 0);
        vector<int> ans;
        for (char c : p)
        {
            freqP[c - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            freqW[s[i] - 'a']++;
            if (i >= m)
            {
                freqW[s[i - m] - 'a']--;
            }
            if (freqP == freqW)
            {
                ans.push_back(i - m + 1);
            }
        }
        return ans;
    }
};