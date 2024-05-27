#include<iostream>

int main(){

    int n;

    std::cout << "Enter a number to find factorial: ";
    std::cin >> n;

    int fact = 1;
    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    std::cout << "factorial of the given number is: " << fact;
    
    return 0;
}