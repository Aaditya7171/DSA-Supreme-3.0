#include <iostream>
#include <limits>

int main() {
    // Integer data type
    int integerVar = 10;
    std::cout << "Integer: " << integerVar << " (Size: " << sizeof(int) << " bytes)" << std::endl;

    // Character data type
    char charVar = 'A';
    std::cout << "Character: " << charVar << " (Size: " << sizeof(char) << " bytes)" << std::endl;

    // Floating-point data types: float and double
    float floatVar = 3.14f;
    std::cout << "Float: " << floatVar << " (Size: " << sizeof(float) << " bytes)" << std::endl;

    double doubleVar = 3.14159265359;
    std::cout << "Double: " << doubleVar << " (Size: " << sizeof(double) << " bytes)" << std::endl;

    // Boolean data type
    bool boolVar = true;
    std::cout << "Boolean: " << std::boolalpha << boolVar << " (Size: " << sizeof(bool) << " byte)" << std::endl;

    // Key points about data types
    std::cout << "\nKey Points:\n";
    std::cout << "------------\n";
    std::cout << "1. int: Represents integer numbers (e.g., 10, -5). Size: " << sizeof(int) << " bytes.\n";
    std::cout << "2. char: Represents single characters (e.g., 'A', 'b'). Size: " << sizeof(char) << " byte.\n";
    std::cout << "3. float: Represents single-precision floating-point numbers (e.g., 3.14). Size: " << sizeof(float) << " bytes.\n";
    std::cout << "4. double: Represents double-precision floating-point numbers (e.g., 3.14159). Size: " << sizeof(double) << " bytes.\n";
    std::cout << "5. bool: Represents boolean values (true/false). Size: " << sizeof(bool) << " byte.\n";

    return 0;
}
