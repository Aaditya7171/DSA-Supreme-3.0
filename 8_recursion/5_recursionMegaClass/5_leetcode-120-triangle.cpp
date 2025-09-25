#include<iostream>
#include<vector>
#include<climits>

using namespace std;

//solution gives TLE, will be tried again in DP week

class Solution {
public:
    // int solve(vector<vector<int>>& triangle, int row, int col){
    //     if(row == triangle.size()) return 0;
    //     //if(row == triangle.size() - 1) return triangle[row][col];

    //     int down = triangle[row][col] + solve(triangle, row + 1, col);
    //     int downPlusOne = triangle[row][col] + solve(triangle, row + 1, col + 1);

    //     return min(down, downPlusOne);
    // }

    void solve(vector<vector<int>>& triangle, int row, int col, int sum, int &ans){
        if(row == triangle.size()) {
            ans = min(ans, sum);
            return;
        }
        solve(triangle, row + 1, col, sum + triangle[row][col], ans);
        solve(triangle, row + 1, col + 1, sum + triangle[row][col], ans);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        // return solve(triangle, 0, 0);
        // int ans = INT_MAX;
        // solve(triangle, 0, 0, 0, ans);
        // return ans;

        // tle free solution 
        int n = triangle.size();
        for (int i = n - 2; i >= 0; i--){
            for (int j = 0; j <= i; j++){
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            }           
        }
        return triangle[0][0];
    }
};