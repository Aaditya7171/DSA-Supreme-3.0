class Solution {
public:
    int maxFreqSum(string s) {
        int vowelCount = 0, consCount = 0;
        string vowels = "aeiou";
        unordered_map<char, int> mp;
        for(auto c : s){
            mp[c]++;
        }
        for(auto i : mp){
            if(vowels.find(i.first) != string::npos){
                vowelCount = max(vowelCount, i.second);
            }
            else {
                consCount = max(consCount, i.second);
            }
        }
        return vowelCount+consCount;
        
    }
};