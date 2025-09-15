class Solution {
public:
    void countArrangementHelper(vector<int>& v, int& n, int& ans, int currNum){
        if(currNum == n + 1){
            ans++;
            return;
        }
        for(int i = 1; i <= n; i++){
            if(v[i] == 0 && (currNum % i == 0 || i % currNum == 0)){
                v[i] = currNum;
                countArrangementHelper(v, n, ans, currNum + 1);
                v[i] = 0; // backtracking
            }
        }
    }
    int countArrangement(int n) {
        vector<int>vec(n + 1); // initialized by 0 initially if size if defined
        int ans = 0;
        countArrangementHelper(vec, n, ans, 1);
        return ans;
    }
};