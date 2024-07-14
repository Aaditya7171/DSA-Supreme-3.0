#include<iostream>

int findFactorial(int n){

    if(n == 0 || n == 1) return 1;//base case

    int fact = n * findFactorial(n-1);//recurive call
    
    return fact;
}

int getFactorial(int n)
{
    if(n == 0 || n == 1) return 1;//base case

    int recursionAns = getFactorial(n - 1);//recurive call

    int finalAns = n * recursionAns;//processing
    
    return finalAns;
}

int main()
{
    int n = 5;
    int factorial = getFactorial(n);
    std::cout << factorial;

    return 0;
}