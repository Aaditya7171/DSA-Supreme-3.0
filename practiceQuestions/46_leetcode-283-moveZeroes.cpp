#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0, h = 0;
        if(n == 1) return;
        for (int h = 0; h < n; ++h) {
            if (nums[h] != 0) {
                if (l != h) { 
                    swap(nums[l], nums[h]);
            }
            l++; 
        }
    }
    }
};