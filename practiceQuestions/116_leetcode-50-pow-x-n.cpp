class Solution {
public:
    double myPow(double x, int n) {
        // double ans = 1.0;
        // for(int i = 0; i < abs(n); i++) ans *= x;        
        // return n < 0 ? 1.0 / ans : ans;

        long long N = n;
        if(N < 0){
            N = -N;
            x = 1.0 / x;
        }
        double res = 1.0;
        double currPow = x;
        while(N > 0){
            if(N % 2 == 1) res *= currPow;
            currPow *= currPow;
            N /= 2;
        }
        return res;
    }
};