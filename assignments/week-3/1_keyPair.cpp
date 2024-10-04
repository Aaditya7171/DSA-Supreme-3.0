#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    bool solve(vector<int>& arr, int target, int n) {
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] + arr[j] == target){
                    return true;
                }
            }
        }
        return false;
    }
    bool twoPointer(vector<int>& arr, int target, int n){
        sort(arr.begin(), arr.end());
        int low = 0, high = n - 1;
        while(low < high){
        int currSum = arr[low] + arr[high];
            if(currSum == target) return true; 
            else if(currSum < target) low++;
            else high--;
        }
        return false;
    }
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        bool ans = twoPointer(arr, target, n);
        return ans;
    }
};