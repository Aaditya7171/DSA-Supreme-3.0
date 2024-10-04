#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int bruteForce(vector<int>& nums){
        for(int i = 0; i < nums.size(); i++){
            int lSum = 0, rSum = 0;
            for(int j = 0; j < i; j++){
                lSum += nums[j];
            }
            for(int j = i + 1; j < nums.size(); j++){
                rSum += nums[j];
            }
            if(lSum == rSum){
                return i;
            }
        }
        return -1;      
    }

    int prefixSum(vector<int>& nums){
        vector<int> lSum(nums.size(), 0);
        vector<int> rSum(nums.size(), 0);

        for(int i = 1; i < nums.size(); i++)
            lSum[i] = lSum[i-1] + nums[i-1];

        for(int i = nums.size()-2; i>=0; i--){
            rSum[i] = rSum[i+1] + nums[i+1];
        }
        for(int i = 0; i < nums.size(); i++){
            if(lSum[i] == rSum[i]) return i;
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        return prefixSum(nums);
    }
};