class Solution {
public:
    int reverse(int n){
        long long ans = 0, i = 0;
        while(n != 0){
            int dig = n % 10;
            ans = ans * 10 + dig;
            n = n /10;
        }
        return ans;
    }
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(reverse(x) == x) return true;
        else return false;
    }
};