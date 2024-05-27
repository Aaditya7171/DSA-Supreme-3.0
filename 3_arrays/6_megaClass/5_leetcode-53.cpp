#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>

using namespace std;

class Solution {
public:
   
    int naive(vector<int> &nums){
        int maxSum = INT_MIN;
        
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = sum + nums[j];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }

//approach 2
    int kadaneAlgo(vector<int>&nums){
           int ans = INT_MIN;
           int sum = 0;
           for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            sum += num;
            ans = max(ans, sum);
            if(sum < 0) sum = 0;
           }
           return ans;
    }
    int maxSubArray(vector<int>& nums) {
        return kadaneAlgo(nums);
    }
};