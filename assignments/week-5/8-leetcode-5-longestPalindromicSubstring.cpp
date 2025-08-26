class Solution {
public: 
    bool isPalindrome(string &s, int l, int h){
        while(l < h){
            if(s[l++] != s[h--]){
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans;
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(isPalindrome(s, i, j)){
                    string t = s.substr(i, j - i + 1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }//t.c. --> O(n^3)
        return ans;
    }
};