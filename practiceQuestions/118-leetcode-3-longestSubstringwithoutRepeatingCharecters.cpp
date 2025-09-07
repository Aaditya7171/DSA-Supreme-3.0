class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> win;
        int maxLen = 0, l = 0;
        for(int r = 0; r < s.size(); r++){
            while(win.count(s[r])){
                win.erase(s[l]);
                l++;
            }
            win.insert(s[r]);
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};