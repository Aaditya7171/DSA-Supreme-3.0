#include<iostream>

int main(){
    
    int principal, rateOfInterest, time;

    std::cout << "Enter principal amount: ";
    std::cin >> principal;
    std::cout << "Enter intertest rate: ";
    std::cin >> rateOfInterest;
    std::cout << "Enter duration: ";
    std::cin >> time;
    int si = (principal * rateOfInterest * time) / 100;
    std::cout << "Simple interest would be: " << si << " rs."; 

    return 0;
}