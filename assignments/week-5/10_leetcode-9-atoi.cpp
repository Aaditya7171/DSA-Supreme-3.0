class Solution {
public:
    int myAtoi(string s) {
        // return atoi(s.c_str());
        int num = 0, i = 0, sign = 1;
        while(s[i] == ' ') i++;

        if(i < s.size() && s[i] == '-' || s[i] == '+')
            sign = s[i++] == '+' ? 1 : -1;
        
        while(i < s.size() && isdigit(s[i])){
            if(num > INT_MAX / 10 || num == INT_MAX / 10 && s[i] > '7') return sign == -1 ? INT_MIN : INT_MAX;
            num = num * 10 + (s[i++] - '0');
        }
        return num * sign ;
    }
// TC: O(n) → single pass through string once.
// SC: O(1) → constant space, only counters and sign used.
};