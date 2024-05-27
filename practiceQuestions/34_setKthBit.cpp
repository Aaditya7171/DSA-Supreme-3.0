//Set the K-th bit of a given number (day-12 : Problem-1)
#include<iostream>

int setKthBit(int num, int bit)
{
    int mask = 1 << bit;

    int result = mask | num;
   
    return result;
}

int main() 
{
    int n, bit;

    std::cout << "Enter the number: ";

    std::cin >> n;

    std::cout << "Enter the position of bit which you want to set from right to left: ";

    std::cin >> bit;

    std::cout << "After setting the " << bit << "th bit: " << setKthBit(n, bit);

    return 0;
}