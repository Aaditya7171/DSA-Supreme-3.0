#include <iostream>

void swapTwoNumbersMethod1(int a, int b)
{
    // using temporary variable
    int temp = a;
    a = b;
    b = temp;

    std::cout << "Swapped numbers using temp var is: a = " << a << " b = " << b << '\n';
}

void swapTwoNumbersMethod2(int a, int b)
{
    // using swap function(inbuilt)
    std::swap(a, b);
    std::cout << "Swapped numbers using swap function is: a = " << a << " b = " << b << '\n';
}

void swapTwoNumbersMethod3(int a, int b)
{
    // using xor(^)
    a = a ^ b; // a = (5 ^ 10)
    b = a ^ b; // b = ((5 ^ 10) ^ 10) = 5
    a = a ^ b; // a = ((5 ^ 10) ^ 5) = 10

    std::cout << "Swapped numbers using XOR is: a = " << a << " b = " << b << '\n';
}

void swapTwoNumbersMethod4(int a, int b)
{
    // using (+,-)
    a = a + b; // a = 5 + 10
    b = a - b; // b = 15 - 10 = 5
    a = a - b; // a = 15 - 5 = 10

    std::cout << "Swapped numbers using '+' and '-' operators is: a = " << a << " b = " << b << '\n';
}

int main()
{
    int a = 5;
    int b = 10;

    swapTwoNumbersMethod1(a, b);
    swapTwoNumbersMethod2(a, b);
    swapTwoNumbersMethod3(a, b);
    swapTwoNumbersMethod4(a, b);

    return 0;
}