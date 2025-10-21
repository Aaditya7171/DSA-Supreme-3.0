class Solution
{
public:
    // storing count of individual word
    unordered_map<string, int> map;
    vector<int> findSubstring(string s, vector<string> &words)
    {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            map[words[i]]++;
        }

        int wordLen = words[0].length();
        // offset logic-> start->0,1,2.. < wordLen
        for (int offset = 0; offset < wordLen; offset++)
        {
            unordered_map<string, int> visited;
            int count = 0;
            for (int i = offset; i + wordLen <= s.length(); i += wordLen)
            {
                string substr = s.substr(i, wordLen);
                // check whether substr is valid or not
                if (map.find(substr) == map.end())
                {
                    visited.clear();
                    count = 0;
                    continue;
                }
                else
                {
                    visited[substr]++;
                    count++;
                    // removal of invalid word
                    while (visited[substr] > map[substr])
                    {
                        // remove from both visited and count
                        string temp = s.substr(i - (count - 1) * wordLen, wordLen);
                        visited[temp]--;
                        count--;
                    }
                    if (count == words.size())
                    {
                        ans.push_back(i - (count - 1) * wordLen);
                    }
                }
            }
        }
        return ans;
    }
};