#include <iostream>

int main() {
    // Declaration of variables
    int num; // Declaration of an integer variable named num
    char letter; // Declaration of a character variable named letter
    float pi; // Declaration of a float variable named pi

    // Definition and initialization of variables
    double price = 99.99; // Definition and initialization of a double variable named price with the value 99.99
    bool flag = true; // Definition and initialization of a boolean variable named flag with the value true

    // Initialization of previously declared variables
    num = 10; // Initialization of the variable num with the value 10
    letter = 'A'; // Initialization of the variable letter with the character 'A'
    pi = 3.14f; // Initialization of the variable pi with the value 3.14

    // Output the values of variables
    std::cout << "num: " << num << std::endl;
    std::cout << "letter: " << letter << std::endl;
    std::cout << "pi: " << pi << std::endl;
    std::cout << "price: " << price << std::endl;
    std::cout << "flag: " << std::boolalpha << flag << std::endl;

    return 0;
}
