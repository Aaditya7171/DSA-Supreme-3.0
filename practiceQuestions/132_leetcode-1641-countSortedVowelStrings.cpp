class Solution {
public:
    int countVowelStrings(int n) {
        int a = 1, e = 1, i = 1, o = 1, u = 1;
        for(int len = 1; len < n; len++){
            a = a + e + o + u + i;
            e = e + i + o + u;
            i = i + o + u;
            o = u + o;
        }
        return a + e + i + o + u;
    }
};