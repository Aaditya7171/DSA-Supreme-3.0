#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//solution gives TLE, will be tried again in DP week

class Solution {
public:
    int solve(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int minCoinAns = INT_MAX;
        for(int i = 0; i < coins.size(); i++){
            int coin = coins[i];
            if(coin <= amount) {
                int recAns = solve(coins, amount-coin);
                if(recAns != INT_MAX){
                    int coinsUsed = 1 + recAns;
                    minCoinAns = min(minCoinAns, coinsUsed);
                }
                else {
                    return -1;
                }
            }
        }
        return minCoinAns;
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins, amount);
        
        return ans;
    }
};