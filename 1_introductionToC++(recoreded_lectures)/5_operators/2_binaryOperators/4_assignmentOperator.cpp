#include<iostream>

int main(){

    int a = 10;
    int b = 5;
    
    std::cout << "Original values: a = " << a << ", b = " << b << "\n";
    
    // Compound assignment operators can be expressed as equivalent expressions.
    
    // +=
    a += b; // Equivalent to a = a + b;
    std::cout << "After addition assignment (a += b), a = " << a << "\n";
    
    // -=
    a -= b; // Equivalent to a = a - b;
    std::cout << "After subtraction assignment (a -= b), a = " << a << "\n";
    
    // *=
    a *= b; // Equivalent to a = a * b;
    std::cout << "After multiplication assignment (a *= b), a = " << a << "\n";
    
    // /=
    a /= b; // Equivalent to a = a / b;
    std::cout << "After division assignment (a /= b), a = " << a << "\n";
    
    // %=
    a %= b; // Equivalent to a = a % b;
    std::cout << "After modulus assignment (a %= b), a = " << a << "\n";
    
    return 0;
}
