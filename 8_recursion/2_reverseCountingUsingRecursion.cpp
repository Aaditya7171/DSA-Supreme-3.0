#include<iostream>

//tail recursion
void printReverseCounting(int n)
{

    // if(n == 0) return;

    if(n == 1){
        std::cout << 1 << " ";
        return;
    }

    std::cout << n << " ";

    printReverseCounting(n-1);

}
//head recursion
void printCounting(int n)
{

    if(n == 0) return;

    printCounting(n-1);

    std::cout << n << " ";

}


int main()
{
    int n = 5;

    printReverseCounting(n);

    std::cout << '\n';


    printCounting(n);

    return 0;
}