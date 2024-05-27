#include<iostream>
#include<iomanip>

int main(){

    // Explanation of cin.fail() and cin.clear():
    // cin.fail() checks whether the last input operation has failed.
    // It returns true if the last input operation failed, and false otherwise. 
    // cin.clear() clears the error state of the input stream "std::cin",
    // allowing further input operations to be attempted.

    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (std::cin.fail()) {
        std::cout << "Invalid input! Please enter a valid integer." << std::endl;
        
        // Without cin.clear():
        // Attempting further input operations here without clearing the error state will fail immediately
        // The program will not prompt the user to enter another integer and will terminate abruptly.

        // With cin.clear():
        // Clear the error state of std::cin
        std::cout << "Enter another integer: ";
        std::cin.clear();

        // Discard the invalid input from the input buffer
        std::cin.ignore(1000, '\n');
    } else {
        std::cout << "You entered: " << num << std::endl;
    }

    return 0;
}
