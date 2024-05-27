#include<iostream>

int main(){

    bool x = true;
    bool y = false;
    
    std::cout << "Logical AND (x && y) : " << (x && y) << "\n"; // Checks if both x and y are true
    std::cout << "Logical OR (x || y) : " << (x || y) << "\n"; // Checks if either x or y is true
    std::cout << "Logical NOT (!x) : " << (!x) << "\n"; // Negates the value of x
    std::cout << "Logical NOT (!y) : " << (!y) << "\n"; // Negates the value of y
    
    return 0;
}
