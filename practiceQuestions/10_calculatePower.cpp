//calculate power by taking a base and exponennt as input
#include<iostream>
#include<math.h>

int main(){

    int base, expo;

    std::cout << "To calculate power, enter base: ";

    std::cin >> base;

    std::cout<< "Enter Exponent: ";

    std::cin >> expo;

    int power = pow(base, expo);

    std::cout << base << "^" << expo << "=" << power ;

    return 0;
}