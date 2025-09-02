class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            int curr = values[s[i]];
            int next = (i + 1 < s.size()) ? values[s[i+1]] : 0;
            if(curr < next) ans -= curr;
            else ans += curr;
        }
        return ans;
    }
};