class Solution {
  public:
    bool isPalindromeRE(string& s, int start, int end){
        if(start >= end) return true;
        if(s[start] != s[end])
            return false;
        return isPalindromeRE(s, start + 1, end - 1);
    }
    bool isPalindrome(string& s) {
        // code here
        bool ans = isPalindromeRE(s, 0, s.size() - 1);
        return ans;
    }
};
// TC: O(n) → check each char pair once; 
// SC: O(n) → recursion depth in call stack.

