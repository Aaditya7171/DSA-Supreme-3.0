#include<iostream>

int main(){
    int marks;
    std::cout << "Enter your marks(out of 100): ";
    std::cin >> marks;
    std::cout << "You've scored " << marks << " marks. \n";
    // if you are not using standard namespace then you also have to use "std::" with endl-->
    std::cout << "You've scored " << marks << " marks. " << std::endl;
    // variable "marks" can be float, double, char as well and will give desired results 
 
    bool bl;
    std::cout << "Enter 0/1: ";
    //We shouln't give input "true/false" in boolean variable, it may give unappropriate results instead we can use 0/1
    std::cin >> bl;
    std::cout << "You have entered: "<< bl << "\n" ;

    return 0;
}