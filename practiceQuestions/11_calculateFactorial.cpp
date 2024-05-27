//Calculate factorial of a given number
#include<iostream>

int main(){

    int num;

    std::cout << "Enter a number to calculate it's factorial: ";

    std::cin >> num;

    int fact = 1;

//if we'll enter letter or string then we're gonna get 1 always, because ">>" fails to extract an integer value from input buffer and then "num" retains 0(0! = 1) by default  
    if(num < 0){
        std::cout << "Factorial of negative numbers is not defined.";
    } else {
        for(int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        std::cout << "Factorial of given number is: " << fact;
    }
    return 0;
}