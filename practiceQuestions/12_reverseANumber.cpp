//Reverse a given number
#include<iostream>

int main() {
    
    int num;

    std::cout << "Enter a number to reverse: ";

    std::cin >> num;

    int reverse = 0;


// check if your code is accurately handling the last bit, e.g., 12345-54321
    while(num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    std::cout << "Reversed number: " << reverse;

    return 0;
}