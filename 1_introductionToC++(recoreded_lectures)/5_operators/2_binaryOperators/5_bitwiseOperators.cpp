#include<iostream>

int main(){

    int a = 10; // Initialize variable a with value 10
    int b = 5;  // Initialize variable b with value 5
    
    // Bitwise AND
    a = a & b; // Perform bitwise AND between a and b, and store the result in a
    std::cout << "After bitwise AND assignment (a &= b), a = " << a << "\n";
    
    // Bitwise OR
    a = 10; // Reset a to its original value
    a = a | b; // Perform bitwise OR between a and b, and store the result in a
    std::cout << "After bitwise OR assignment (a |= b), a = " << a << "\n";
    
    // Bitwise NOT
    a = 10; // Reset a to its original value
    a = ~a; // Perform bitwise NOT on a, and store the result in a
    std::cout << "After bitwise NOT assignment (~a), a = " << a << "\n";
    
    // Bitwise right shift
    a = 10; // Reset a to its original value
    a = a >> 2; // Perform bitwise right shift on a by 2 positions, and store the result in a
    std::cout << "After bitwise right shift assignment (a >>= 2), a = " << a << "\n";
    
    // Bitwise left shift
    a = 10; // Reset a to its original value
    a = a << 2; // Perform bitwise left shift on a by 2 positions, and store the result in a
    std::cout << "After bitwise left shift assignment (a <<= 2), a = " << a << "\n";
    
    // Bitwise XOR
    a = 10; // Reset a to its original value
    a = a ^ b; // Perform bitwise XOR between a and b, and store the result in a
    std::cout << "After bitwise XOR assignment (a ^= b), a = " << a << "\n";
    
    return 0;
}
 