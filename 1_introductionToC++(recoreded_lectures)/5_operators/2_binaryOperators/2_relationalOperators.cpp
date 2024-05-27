#include<iostream>

int main(){

    int a = 20;
    int b = 6;
    
    std::cout << "Greater than (a > b) : " << (a > b) << "\n"; // Checks if a is greater than b
    std::cout << "Less than (a < b) : " << (a < b) << "\n"; // Checks if a is less than b
    std::cout << "Greater than or equal to (a >= b) : " << (a >= b) << "\n"; // Checks if a is greater than or equal to b
    std::cout << "Less than or equal to (a <= b) : " << (a <= b) << "\n"; // Checks if a is less than or equal to b
    std::cout << "Equality (a == b) : " << (a == b) << "\n"; // Checks if a is equal to b
    std::cout << "Inequality (a != b) : " << (a != b) << "\n"; // Checks if a is not equal to b
    
    return 0;
}
