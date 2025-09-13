class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s = "";
        while(a > 0 && b > 0){
            if(a > b){
                s += "aab";
                a -= 2;
                b -= 1;
            }
            else if(b > a){
                s += "bba";
                a -= 1;
                b -= 2;
            }
            else {
                s += "ab";
                a -= 1;
                b -= 1;
            }
        }
        while(a > 0){
            s += "a";
            a--;
        }
        while(b > 0){
            s += "b";
            b--;
        }
        return s;
    }
};