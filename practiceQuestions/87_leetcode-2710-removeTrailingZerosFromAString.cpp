class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.size() - 1;
        while(n >= 0 && num[n] == '0') {
            num.erase(n, 1);
            n--;
        }
        return num;
    }
};