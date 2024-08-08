#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = -200039;
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                ans = i;
                break;
            }
            if(nums[n-1] < target){
                ans = n;
                break;
            }
            if(nums[i] < target && nums[i+1] > target){
                ans = i + 1;
                break;
            }
            if(nums[i] > target) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};