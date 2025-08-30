class Solution {
public:
    void findMaxProfit(vector<int>& prices, int& minPrice, int& maxProfit, int i){
        if(i >= prices.size()) return;
        if(prices[i] < minPrice)  minPrice = prices[i];
        int today = prices[i] - minPrice;
        if(today > maxProfit) maxProfit = today;

        findMaxProfit(prices, minPrice, maxProfit, i+1);
    }
    int maxProfit(vector<int>& prices) {

    // Iterative Approach
    // int minPrice = prices[0], maxProfit = 0;
    // for(int i = 1; i < prices.size(); i++){
    //     maxProfit = max(maxProfit, prices[i] - minPrice);
    //     minPrice = min(minPrice, prices[i]);
    // }
    // return maxProfit;
    // TC: O(n) → single pass through prices; 
    // SC: O(1) → only two vars (minPrice, maxProfit).


    int minPrice = INT_MAX, maxProfit = INT_MIN;
    findMaxProfit(prices, minPrice, maxProfit, 0);
    return maxProfit;
    }
};
// TC: O(n) → scan each price once; SC: 
// O(n) → recursion depth in call stack.
