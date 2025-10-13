class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> ans;
        string prevSig;
        for (int i = 0; i < words.size(); i++)
        {
            string sig = words[i];
            sort(sig.begin(), sig.end());
            if (i == 0 || sig != prevSig)
            {
                ans.push_back(words[i]);
                prevSig = sig;
            }
        }
        return ans;
    }
};