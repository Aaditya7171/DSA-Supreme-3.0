#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int low = 0, high = n - 1;
        
        while(low < high){
            
            if(arr[low] + arr[high] == x){
                return true;
            }
            
            else if(arr[low] + arr[high] < x){
                low++;
            }
            
            else{
                high--;
            }
        }
        return false;
    }
};