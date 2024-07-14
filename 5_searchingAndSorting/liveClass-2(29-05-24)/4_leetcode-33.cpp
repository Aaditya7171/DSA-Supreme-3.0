#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    
    int getPivotIndex(vector<int>& arr){
        int s = 0;
        int n = arr.size();
        int e = n - 1;
        
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(s == e){
                return s;
            }
            if(mid + 1 < n &&arr[mid] > arr[mid+1]){
                return mid;
            }
            if(arr[s] > arr[mid]){
                e = mid - 1;
            }
            else {
                s = mid + 1 ;
            }
        }
        return -1;
    }
    int binanrySearch(int s, int e, int target, vector<int>arr){
        while(s <= e){
            int mid = s + (e-s) / 2;

            if(arr[mid] == target){
                return mid;
            }
            if(target > arr[mid]){
                s = mid + 1;
            }
            if(target < arr[mid]) {
                e = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex = getPivotIndex(nums);
        int n = nums.size();
        //if ans is in line A
        if(target >= nums[0] && target <= nums[pivotIndex]){
            int ans = binanrySearch(0, pivotIndex, target, nums);
            return ans;
        }
        //if ans is in line B
        else {
            int ans = binanrySearch(pivotIndex+1, n-1, target, nums);
            return ans;
        }
        return -1;
    }
};