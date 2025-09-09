class Solution {
public:
    string baseNeg2(int n) {
        if(n == 0) return "0";
        string res = "";
        while(n){
            if(n % 2){
                res = "1" + res;
                n = (n - 1) / (-2);
            } else {
                res = "0" + res;
                n = n / (-2);
            }
        }
        return res;
    }
};