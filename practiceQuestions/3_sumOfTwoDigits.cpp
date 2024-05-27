//make a program to add two digits taken as input from user
#include<iostream>
#include<limits> // for numeric_limits

int main(){
    
    int first, second, sum;

    std::cout<< "Enter first number: ";
   //while(true) --> means that input isn't stored at first so it will return "false" and then "!' will make it "true
    while(!(std::cin >> first)) {
        //if non integer value is entered only then that block will be executed 
        std::cout << "Invalid input. Please enter an integer : ";
        //cin.clear()-->clears the error flags of the input stream that  allows further input operations
        std::cin.clear();
        //Discards the invalid input up to the newline character 
        //std::numeric_limits--> it is a template class defined in <limits> that provides  a way to query various properties of fundamental types
        //<std::streamsize>--> It's the template parameter specifying the type for which we want to query properties. (int this case:size of characters in streams)
        //::max()-->a static member function of <std::numeric_limits> that returns the maximum value representable by the specified type(in this: it returns the maximum value representable by std::streamsize.)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    std::cout<< "Enter second number: ";
    while(!(std::cin >> second)) {
       std::cout << "Invalid input. Please enter an integer : ";
       std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    sum = first + second;

    std::cout << "Sum of given two numbers is : " << sum << '\n';

    return 0;
}