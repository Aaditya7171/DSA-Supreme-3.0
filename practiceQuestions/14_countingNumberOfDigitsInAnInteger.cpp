//counting number of digits in a given integer
#include <iostream>

int main() {
    
    int num;

    std::cout << "Enter a number to count number of digits in it: ";

    std::cin >> num;

    int count = 0;
    if(num == 0) {
        std::cout << "Number od digit: 1";
    } else {
    while(num != 0) {
        count++;
        num = num / 10;
        }
    
    std::cout << "Number of digits: " << count;
    }

    return 0;
}