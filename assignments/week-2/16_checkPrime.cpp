#include<iostream>

bool isPrime(int n)
{
    if(n <= 1 ) return false;
    for(int i = 2 ; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
      
    isPrime(1) ? std::cout << "Number is prime" : std::cout << "Number is not Prime";
    
    return 0;
}