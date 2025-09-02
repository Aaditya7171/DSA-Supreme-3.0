class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(char &c : s){
            ans.push_back(tolower(c));
        }
        return ans;
    }
};