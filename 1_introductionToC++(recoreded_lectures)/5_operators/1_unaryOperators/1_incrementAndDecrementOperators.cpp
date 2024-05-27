#include<iostream>

int main() {
    
    // Pre-increment
    int a = 5;
    std::cout << "Pre-increment: " << (++a) << '\n'; // Outputs: 6, a is now 6
    std::cout << "Addition after pre-increment: " << a + 10 << '\n'; // Outputs: 16

    // Post-increment
    int b = 5;
    std::cout << "Post-increment: " << (b++) << '\n'; // Outputs: 5, b is now 6
    std::cout << "Addition after post-increment: " << b + 10 << '\n'; // Outputs: 16

    // Pre-decrement
    int c = 5;
    std::cout << "Pre-decrement: " << (--c) << '\n'; // Outputs: 4, c is now 4
    std::cout << "Addition after pre-decrement: " << c + 10 << '\n'; // Outputs: 14

    // Post-decrement
    int d = 5;
    std::cout << "Post-decrement: " << (d--) << '\n'; // Outputs: 5, d is now 4
    std::cout << "Addition after post-decrement: " << d + 10 << '\n'; // Outputs: 14

    return 0;
}

