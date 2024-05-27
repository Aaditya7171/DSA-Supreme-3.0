//Print prime numebrs between 0-input (day-10 : Problem-3)
#include<iostream>

bool checkPrime(int n)
{
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int input;

    std::cout << "Enter the number till which you want to know prime numbers: ";

    std::cin >> input;

    for(int i = 2; i <= input; i++) {
        bool checkNum = checkPrime(i);
        if(checkNum == true) {
            std::cout << i << " ";
        }
    }
    return 0;
}