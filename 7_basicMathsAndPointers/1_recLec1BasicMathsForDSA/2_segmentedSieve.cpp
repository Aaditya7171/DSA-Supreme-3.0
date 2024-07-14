//Homework-->
#include<iostream>
#include<vector>

std::vector<int> sieve(int n) {

    std::vector<bool> prime(n+1, true);
    std::vector<int>primes;
    prime[0] = prime[1] = false;


    for(int i = 2; i <= n; i++){
        if(prime[i]){
            primes.push_back(i);
            int j = 2 * i;
            while(j < n){
                prime[j] = false;
                j = j + i;
            }
        }
    }
    return primes;
}

int segmentedSieve(int low, int high){

    std::vector<int> primes = sieve(high);//all primes from 0 to high are in vector "primes"

    std::vector<bool> isPrime(high - low + 1, true);//mark primes in range [low, high]
    
    for(int i = 0; i < primes.size(); i++){
        int prime = primes[i];
        if(prime * prime > high) break;

        int start = std::max(prime * prime, (low + prime - 1) / prime*prime);

        for(int j = start; j <= high; j = j + prime){
            isPrime[j - low] = false;
        }
    }

    int count = 0; 
    for(int i = low; i <= high; i++){
        if(isPrime[i - low] && i != 1){
            count++;
        }
    }
    return count;
}

int main(){
    int low = 10, high = 20;
    // std::vector<int> ans = sieve(high);

    // for(int prime : ans) {
    //     std::cout << prime << " ";
    // }
    
    int ans = segmentedSieve(low, high);

    std::cout << ans;
    return 0;
}