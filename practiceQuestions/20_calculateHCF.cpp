// calculate HCF of two numbers (day-7 : problem:2)
#include<iostream>

int calcHCF(int a, int b) 
{   
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if(num1 == num2) {
        std::cout << "HCF of given two numbers is: " << num1;
    } else if (num1 < num2) {
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
        int hcf = calcHCF(num1, num2);
        std::cout << "HCF of given two numbers is: " << hcf;
    } else {
        int hcf = calcHCF(num1, num2);
        std::cout << "HCF of given two numbers is: " << hcf;
    }
    return 0;
}
