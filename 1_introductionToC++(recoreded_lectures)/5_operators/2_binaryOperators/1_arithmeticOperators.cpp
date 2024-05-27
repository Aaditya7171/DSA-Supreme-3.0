#include<iostream>

int main(){

    int a = 20;
    int b = 6;
    
    //(a + b)--> "a,b" : operands && "+"  : Addition Operator
    std::cout << "Addition(a + b) : " << (a + b) << "\n";
    std::cout << "Subtraction(a - b) : " << (a - b) << "\n";
    std::cout << "Multiplication(a * b) : " << (a * b) << "\n";
    std::cout << "Division(a / b) : " << (a / b) << "\n";
    std::cout << "Modulus(a % b) : " << (a % b) << "\n";
    std::cout << "Unary negation(-a): " << (-a) << '\n';
    return 0;
}