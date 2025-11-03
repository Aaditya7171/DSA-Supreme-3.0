class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        vector<string> ans;
        if (s.size() < 10)
            return {};
        unordered_map<string, int> seqCount;
        for (int i = 0; i <= s.size() - 10; i++)
        {
            // 10 size window
            string curr10SizeWindow = s.substr(i, 10);
            seqCount[curr10SizeWindow]++;
            // if(seqCount[curr10SizeWindow] == 2)
            //     ans.push_back(curr10SizeWindow);
        }
        for (auto &[substr, freq] : seqCount)
        { // destructuring
            if (freq > 1)
                ans.push_back(substr);
        }
        return ans;
    }
};