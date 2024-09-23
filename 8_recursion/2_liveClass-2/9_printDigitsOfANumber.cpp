#include<iostream>

void printDigits(int num)
{
    if(num == 0) return;

    printDigits(num/10);
    
    int digit = num % 10;

    std::cout << digit << " ";  
}

int main() 
{
    int num = 3897;    
    printDigits(num);
    
    return 0;
}