//leetcode problem 241. count primes

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

// class Solution {
// public:
//     //Ap.1 and Ap.2 will give TLE
//     //Ap-1. Naive approach--->
//     bool isPrime(int n){
//         for(int i = 2; i < n; i++){
//             if(n % i == 0){
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     //Ap2. sqrt approach--->
//     bool isPrime(int n){
//         int sqrtN = sqrt(n);
//         for(int i = 2; i <= sqrtN; i++){
//             if(n % i == 0){
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     int countPrimes(int n) {
//         int count = 0;
//         for(int i = 2; i < n; i++){
//             if(isPrime(i)){
//                 count++;
//             }
//         }
//         return count;
//     }
// };


//Sieve eratosthenes--->
class Solution {
public:
    
    int countPrimes(int n) {
        if(n == 0) return 0;

        vector<bool> prime(n, true);
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

int main(){
    Solution sol;
    int ans = sol.countPrimes(20);
    std::cout << ans;

    return 0;
}