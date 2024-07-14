#include<iostream>

int factorial(int n)
{
    int fact = 1;
    while(n != 0){
        fact = fact * n;
        n-=1;
    }
    return fact;
}

int main()
{
    std::cout << factorial(6);
    return 0;
}