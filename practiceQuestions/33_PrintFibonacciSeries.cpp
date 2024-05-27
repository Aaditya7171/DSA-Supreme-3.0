//Print the Fibonacci series (day-11 : Problem-3)
#include<iostream>

void printFabbinacciSeries(int n)
{
    int a = 0, b = 1, result = 0;
    std::cout << a << ", "; 
    for(int i = 1; i < n; i++) {
        result = a + b;
        a = b;
        b = result;
        std::cout << a <<", ";
    }
}

int main()
{
    int nthNum;
    std::cout << "Enter nth number of fabbinacci series: ";
    std::cin >> nthNum;

    std::cout << "Fibbonacci series upto " << nthNum << "th term is: ";
    if(nthNum == 0) {
        std::cout << "0 ";
    } else if (nthNum == 1) {
        std::cout << "0 , 1";
    } else {
        printFabbinacciSeries(nthNum);
    }
    return 0;
}