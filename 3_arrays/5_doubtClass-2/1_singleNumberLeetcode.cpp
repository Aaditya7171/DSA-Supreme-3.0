#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // approach-2
        sort(nums.begin(), nums.end());
        int ans = -1, i = 0;
        int n = nums.size();
        while(i < n){
            if(i + 1 < n && nums[i] == nums[i+1])
            i += 2;
            else{
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};