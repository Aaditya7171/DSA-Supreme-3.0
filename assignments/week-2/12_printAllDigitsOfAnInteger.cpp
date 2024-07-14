#include<iostream>
#include<cmath>

int countDigits(int n){
    int count = 0;
    while(n != 0){
        n = n / 10;
        count++;
    }
    return count;
}

void printDigits(int n)
{
    int numDigits = countDigits(n);
    int div = std::pow(10, numDigits - 1);
    while(div > 0) {
 
        int res = (n / div);

        std::cout << res << " ";

        n = n % div;

        div = div / 10;
    }
}

int main()
{
    int n = 123334;

    printDigits(n);

    return 0;
}