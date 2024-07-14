#include<iostream>

void printFibbonacciSeries(int n, int a, int b)
{   
    if(n == 2) return ;

    int ans = 0;

    if(a == 0 && b == 1) std::cout << a << " " << b << " ";
    
    ans = a + b;
    a = b;
    b = ans;

    std::cout << ans << " ";

    printFibbonacciSeries(n-1, a, b);
}

int fib(int n)
{
    //base case
    if(n == 0 || n == 1) return n;
    //recursive relation
    int ans = fib(n - 1) + fib(n - 2);
    
    return ans;
}

int main()
{
    int n = 10;// n = number of terms(0-n)

    int a = 0, b = 1;

    printFibbonacciSeries(n, a , b);

    std::cout << '\n';

    std::cout << fib(10);

    return 0;
}