class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());

        return rev == str;
    }
};