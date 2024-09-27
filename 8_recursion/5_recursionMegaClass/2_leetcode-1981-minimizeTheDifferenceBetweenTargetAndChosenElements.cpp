#include<iostream>
#include<vector>
#include<climits>

using namespace std;

//solution gives TLE, will be tried again in DP week


class Solution {
public:
    // int solve(vector<vector<int>>& mat, int sum, int row, int target) {
    //     if(row == mat.size()) return abs(target - sum);

    //     int ans = INT_MAX;
    //     for(int col = 0; col < mat[row].size(); col++){
    //         int recAns = solve(mat, sum + mat[row][col], row + 1, target);
    //         ans = min(ans, recAns);
    //     }
    //     return ans;
    // }

    // int minimizeTheDifference(vector<vector<int>>& mat, int target) {
    //     int sum = 0, row = 0;
    //     return solve(mat, sum, row, target);
    // }
    void solve(vector<vector<int>>& mat, int sum, int row, int target, int& mini) {
        if(row == mat.size()) {
            mini = min(mini, abs(target - sum));
            return;
        }

        for(int col = 0; col < mat[row].size(); col++){
            solve(mat, sum + mat[row][col], row + 1, target, mini);
        }
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int sum = 0, row = 0, mini = INT_MAX;
        solve(mat, sum, row, target, mini);
        return mini;
    }
};