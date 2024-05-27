#include<vector>
#include<algorithm>

class Solution {
public:
    int missingNumber(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        int n = arr.size();
        int start = 0, end = n - 1, ansIndex = -1;
        int mid = start + (end - start) / 2;

        while(start <= end){
            int number = arr[mid];
            int index = mid;
            int diff = number - index;

            if(diff == 0){
                start = mid + 1;
            }
            else if(diff == 1){
                ansIndex = index;
                end = mid - 1;
            }
            mid = start + (end - start) /2;
        }
        if(ansIndex == -1){
            return n;
        }
        return ansIndex;
    }
};