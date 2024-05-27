//sum of digits (day-6 : problem:2)
#include<iostream>
#include<limits>

int sumOfDigits(int n)
{   
    int sum = 0;
    while(n != 0) {
        int digit = n % 10;// Extract the rightmost digit
        n = n / 10;// Remove the rightmost digit from the number
        sum = sum + digit;// Add the extracted digit to the sum
    }
    return sum;// Return the sum of digits
}

int main() 
{
    int num;

    std::cout << "Enter a number: ";
    // Check for valid input
    while(!(std::cin >> num)) {
        std::cin.clear(); // Clear the error flags of the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');// Discard invalid input
        std::cout << "Invalid input. Please enter a valid number: ";//ask again for valid input
    }

    int sum = sumOfDigits(num);// Calculate the sum of digits

    std::cout << "Sum of each digit of the given number is: " << sum;

    return 0;
}