//sum of first and lsst digit of a number (day-7 : problem:3)
#include<iostream>
#include<cmath>

int sumOfDigits(int num) 
{   
    int originalNum = num;
    int count = 0;
    while(num != 0) {
        num = num / 10;
        count++;
    }
    int firstDigit = originalNum / pow(10, (count - 1));
    int lastDigit = originalNum % 10;

    return firstDigit+lastDigit;
}

int main () 
{ 
    int num;

    std::cout << "Enter a number: ";

    std::cin >> num;

    int sum = sumOfDigits(num);

    std::cout << "Sum of first and last digit of given number is: " << sum;

    return 0;
}