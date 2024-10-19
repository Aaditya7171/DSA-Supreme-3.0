#include<vector>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // int n = arr.size();
        // int count = 0;
        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         if((arr[i] + arr[j]) % k == 0){
        //             count++;
        //         }
        //     }
        // }
        // if(count >= n/2) return true;
        // else return false; 

        vector<int> remainderCount(k, 0);
        for(int num : arr) {
            int remainder = (num % k + k) % k;
            remainderCount[remainder]++;
        }
        
        if(remainderCount[0] % 2 != 0) return false; 
        
        for(int i = 1; i < k; i++) {
            if(remainderCount[i] != remainderCount[k - i]) {
                return false; 
            }
        }
        
        return true;
    }
};