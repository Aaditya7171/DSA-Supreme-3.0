#include <iostream>

int main() {
    int budget;

    // Prompt the user to enter their budget
    std::cout << "Enter your budget: ";

    // Read the user's input for the budget
    std::cin >> budget;

    // Check if the budget is greater than 6000000
    if (budget > 6000000) {
        // If the budget is greater than 6000000, output a message
        std::cout << "You can purchase a BMW now. \n";
    }

    // Exit the program with return code 0
    return 0;
}
