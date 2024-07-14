#include<iostream>

int countSetBits(int n)
{
    int setBit = 0;
    while(n > 0) {
        if(n & 1 == 1){
            setBit++;
        }
        n = n >> 1;    
    }
    return setBit;
}

int main() 
{
    int n;

    std::cout << "Enter a number to count setbits: ";

    std::cin>> n;

    std::cout << "Number of setbits in " << n << " are: " << countSetBits(n) ;

    return 0;
} 