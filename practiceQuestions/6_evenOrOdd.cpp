#include<iostream>

int main(){
    
    int num;

    std::cout << "Enter a integer to find is it even or odd : ";

    std::cin >> num;

    if(num % 2 == 0){
        std::cout << "Given integer is even.";
    } else {
        std::cout<< "You've entered an odd integer.";
    }
    
    return 0; 
}