class Solution {
public:
    bool isMatchHelper(string& s, int si, string& p, int pi){
        // this solution gives TLE, will be optimized using DP in DP week
        // Base case
        if(si == s.size() && pi == p.size()) return true;

        if(si == s.size() && pi < p.size()){
            // s string is empty but p string is left
            while(pi < p.size()){
                if(p[pi] != '*') return false;//non * found
                pi++;
            }
            return true;// only "*" are left
        }

        if(s[si] == p[pi] || '?' == p[pi]){
            return isMatchHelper(s, si+1, p, pi+1);
        }
        //single char matching
        if(p[pi] == '*'){
            bool caseA = isMatchHelper(s, si, p, pi+1);// "*" == NULL
            bool caseB = isMatchHelper(s, si + 1, p, pi); // "*"->consume one char
            return caseA || caseB;
        }
        return false; //char match nahi huaa
    }
    bool isMatch(string s, string p) {
        int si = 0, pi = 0;
        return isMatchHelper(s, si, p, pi);
    }
    // TC: O(2^(n+m)) → each '*' splits into two recursive paths; 
    // SC: O(n+m) → recursion depth.
};