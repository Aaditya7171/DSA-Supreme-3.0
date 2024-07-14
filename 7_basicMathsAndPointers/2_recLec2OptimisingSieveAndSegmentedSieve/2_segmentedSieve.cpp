#include<iostream>
#include<vector>
#include<cmath>

std::vector<bool> simpleSieve(int n){
    std::vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for(int i = 2; i*i <= n; i++){
        if(sieve[i] == true){
            int j = i * i;
            while(j <= n){
                sieve[j] = false;
                j = j + i;
            }
        }
    }
    return sieve;
}

std::vector<bool> segmentedSieve(int l, int r)
{
    std::vector<bool>sieve = simpleSieve(sqrt(r));
    std::vector<int>basePrimes;
    for(int i = 0; i < sieve.size(); i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    std::vector<bool> segSieve(r-l+1, true);

    if(l == 0 || l == 1){
        segSieve[0] = false;
    }

    for(auto prime:basePrimes){
        int first_mul = (l / prime) * prime;
        if(first_mul < l){
            first_mul += prime;
        }
        int j = std::max(first_mul, prime*prime);
        while(j <= r){
            segSieve[j - l] = false;
            j += prime;
        }
    }
    return segSieve;
}

int main()
{
    int l = 110, r = 130;

    std::vector<bool> sS = segmentedSieve(l,r);

    for(int i = 0; i < sS.size(); i++){
        if(sS[i]) {
            std::cout << i + l << " ";
        }
    }
    return 0;
}