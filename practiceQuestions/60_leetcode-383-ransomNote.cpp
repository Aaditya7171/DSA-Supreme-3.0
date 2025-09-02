class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(char c : magazine){
            mp[c]++;
        }
        for(char ch : ransomNote){
            if(mp[ch] == 0) return false;
            mp[ch]--;
        }
        return true;
    }
};