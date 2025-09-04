class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char i : s){
            freq[i]++;
        }
        vector<pair<char,int>>fvec(freq.begin(), freq.end());
        sort(fvec.begin(), fvec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        string res;
        for(auto p : fvec){
            res += string(p.second, p.first);
            // The string(count, character) a built-in C++ string constructor
            // For freqVec = [('e',2), ('t',1), ('r',1)]--> "eetr"
        }
        return res;
    }
};