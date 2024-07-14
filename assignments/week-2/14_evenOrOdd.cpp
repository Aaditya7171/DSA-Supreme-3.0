#include<iostream>

bool normalMethodToCheckEvenOdd(int n)
{
    return n % 2 == 0 ? false : true;
}

bool bitwiseMethodToCheckEvenOdd(int n)
{
    return n & 1 == 0 ? false : true;
}

int main()
{
    int n = 17;

    if(bitwiseMethodToCheckEvenOdd(n)){
    // if(normalMethodToCheckEvenOdd(n)){
        std::cout << "Number is odd";
    }
    else {
        std::cout << "Number is even";
    }
    
    return 0;
}