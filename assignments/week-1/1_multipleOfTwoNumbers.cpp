#include<iostream>

int main(){
    
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int multi = (num1 * num2);
    std::cout << "Multiple of given two numbers is: " << multi; 

    return 0;
}