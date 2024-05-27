#include<iostream>


int main(){
    int budget;

    std::cout << "Enter your budget: ";

    std::cin >> budget;

    // Check if the budget is greater than 1500000
    if (budget > 1500000) {
        // If the budget is greater than 1500000, output a message
        std::cout << "You can afford a good and safe car. \n";
    } else {
        // If the budget is not greater than 1500000, output another message
        std::cout << "You should wait for some time. \n";
    }

    return 0;
}
