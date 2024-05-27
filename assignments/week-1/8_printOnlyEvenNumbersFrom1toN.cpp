#include<iostream>

int main()
{
    int n;

    std::cout << "Enter value of n to print all even numbers from 1 to n: ";

    std::cin>> n ;

    for(int i = 2; i <= n; i+=2){
        std::cout << i << " ";
    }
    return 0;
}