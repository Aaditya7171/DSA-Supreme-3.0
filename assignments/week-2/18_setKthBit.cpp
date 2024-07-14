#include<iostream>

int setKthBit(int num, int bit)
{
    int mask = 1 << bit;

    int result = mask | num;
   
    return result;
}

int m2(int N, int K){
    return N | (1<<K);
}

int main() 
{
    int n, bit;

    std::cout << "Enter the number: ";

    std::cin >> n;

    std::cout << "Enter the position of bit which you want to set from right to left: ";

    std::cin >> bit;

    std::cout << "After setting the " << bit << "th bit: " << m2(n, bit);

    return 0;
}