#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int bruteForce(vector<int>& nums){
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] != i){
                return i;
            }
        }
        return n;
    }

    int XOR(vector<int>& nums){
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            res ^= nums[i];
        }
        for(int i = 0; i <= nums.size(); i++){
            res ^= i;
        }
        return res;
    }
    int missingNumber(vector<int>& nums) {
        return XOR(nums);
    }
};