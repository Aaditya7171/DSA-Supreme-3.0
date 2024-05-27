//Basic calculator
#include<iostream>
#include<math.h>

int main() {

    char opSymbol;
    double num1, num2;

    std::cout << "Welcome! here you can give 2 numbers and an operation to be performed on those numbers as input to calculate it." << '\n';

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation to be performed(e.g., + - * / % ^)";
    std::cin >> opSymbol;

    double result;

    switch(opSymbol){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
            } else {
                //division num1/0 will give error
                std::cout << "Error! Division by 0!";
                return 0;
            }
            break;
        case '%':
            //the modulus operator can only be used with integer so converting float to int-->
            result = (int)num1 % int(num2);
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            std::cout << "Error! Invalid Operator";
    }
     
    std::cout << "Result: " << result;
    
    return 0;
}