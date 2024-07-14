//gfg solution(product of primes)
#include<vector>
#include<cmath>
#include<algorithm>

std::vector<bool> simpleSieve(int n){
            std::vector<bool> sieve(n + 1, true);
            sieve[0] = sieve[1] = false;
            
            for(int i = 2; i * i <= n; i++){
                if(sieve[i] == true){
                    int j = i * i;
                    while(j <= n){
                        sieve[j] = false;
                        j+=i;
                    }
                }
            }
            return sieve;
        }
class Solution{
public:
    long long primeProduct(long long l, long long r){
        // code here
            const int MOD = 1000000007;
            std::vector<bool> sieve = simpleSieve(sqrt(r));
            std::vector<int> basePrimes;
            for(int i = 2; i < sieve.size(); i++){
                if(sieve[i]){
                    basePrimes.push_back(i);
                }
            }
            std::vector<bool> segSieve(r-l+1, true);
            if(l == 0 || l == 1){
                segSieve[0] = false;
            }
            for(auto prime:basePrimes){
                int fm = (l / prime) * prime;
                if(fm < l){
                    fm += prime;
                }
                long long j = std::max(fm, prime*prime);
                 while(j <= r){
                    segSieve[j - l] = false;
                    j += prime;
                }
            }
            long long result = 1;
            for(int i = 0; i < segSieve.size(); i++){
                if(segSieve[i]){
                    result = (result * (i + l)) % MOD;
                }
            }
            return result;
      }
};

