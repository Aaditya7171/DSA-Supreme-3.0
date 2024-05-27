#include<iostream>

int main(){
    int n;

    std::cout << "Enter a number to check whether it is prime or not: ";
    std::cin >> n;


    bool check = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            check = false;
            break;
        }
    }   
    if(n<=1) check = false;
    if(check) std::cout << "Given number is a prime number.";
    else std::cout << "Given number is not a prime number.";
    return 0;
}