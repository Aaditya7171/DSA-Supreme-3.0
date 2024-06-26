// leetcode problem 704-->

#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1;
        

        while(start <= end){
            int mid = start + (end - start)/ 2;
            if(nums[mid] == target) {
                return mid;
            }
            if(target < nums[mid]) {
                end = mid-1;
            }
            else if(target > nums[mid]) {
                start = mid+1;
            }
        }
        return -1;
    }
};