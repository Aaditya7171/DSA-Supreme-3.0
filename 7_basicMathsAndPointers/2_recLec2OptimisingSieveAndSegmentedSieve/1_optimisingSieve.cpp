#include<iostream>
#include<vector>

std::vector<bool> sieve(int n)
{
    std::vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    // for(int i = 0; i < n; i++){
    for(int i = 2; i*i <= n; i++){//optimisation - 2
        if(sieve[i] == true){
            // int j = i * 2;
            int j = i * i;//optimisation - 1
            while(j <= n){
                sieve[j] = false;
                j = j + i;
            }
        }
    }
    return sieve;
}

int main()
{
    int n = 20;

    std::vector<bool> primes = sieve(n);

    for(int i = 0; i < n; i++){
        if(primes[i]){
            std::cout << i << " ";
        }
    }
    return 0;
}