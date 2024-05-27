#include<iostream>

int main() {

    int num1, num2, num3;
    
    std::cout << "Enter three numbers : ";

    std::cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num1 > num3) {
        std::cout << num1 << " is greatest.";
    }
    else if(num2 > num1 && num2> num3) {
        std::cout << num2 << " is greatest.";
    }
    else if(num3 > num1 && num3 > num2) {
        std::cout << num3 << " is greatest.";
    }
    else{
        std::cout << "All are equal.";
    }
    return 0;
}