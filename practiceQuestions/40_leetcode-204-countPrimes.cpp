#include<vector>

class Solution {
public:
    
    int countPrimes(int n) {
        if(n == 0) return 0;

        std::vector<bool> prime(n, true);
        prime[0] = prime[1] = false;

        int count = 0;

        for(int i = 2; i < n; i++){
            if(prime[i]){
                count++;

                int j = 2 * i;
                while(j < n){
                    prime[j] = false;
                    j = j + i;
                }
            }
        }
        return count;
    }
};