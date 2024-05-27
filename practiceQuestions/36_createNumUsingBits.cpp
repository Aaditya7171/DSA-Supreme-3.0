//Generate the max number from the combination of given number of bits(day-12 : Problem-3)
#include<iostream>
#include<cmath>

int createNumber(int n)
{
    int result = pow(2, n) - 1;
    return result;
}

int main()
{
    int numBits;

    std::cout << "Enter number of bits: ";

    std::cin>> numBits;

    int result = createNumber(numBits);

    std::cout << "The number created with " << numBits << " bits: " << result << std::endl;

    return 0;
}