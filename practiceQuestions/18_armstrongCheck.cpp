//Check given number is armstrong number or not{0-9,15,370,371,407,1634.....}(day-6 : problem:3)
#include<iostream>
#include<limits>
#include<cmath>

// Function to count the number of digits in an integer
int countDigits(int n)
{
    int digits = 0;
    while(n != 0) {
        n = n / 10;
        digits++;
    }
    return digits;
}

// Function to check if a number is an Armstrong number
bool checkArmstrong(int n) 
{
    int result = 0;
    int unmodifiedNum = n;  // Store the original number for comparison later
    int digits = countDigits(n);// Calculate the number of digits in the number
    while(n != 0) {
        int digit = n % 10;// Extract the rightmost digit
        int power = 1;
        // Nested loop to calculate the power of the digit
        for(int i = 0; i < digits; i++){
            power = power * digit;// Calculate the power by multiplying the digit
        }
        result = result + power;// Add the powered digit to the result
        n = n / 10; // Remove the rightmost digit
    }
    return result == unmodifiedNum;// Check if the result is equal to the original number
}

int main() 
{
    int num;
 
    std::cout << "Enter a number: ";
    // Input validation loop
    while(!(std::cin >> num)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. please enter a number: ";
    }

    // Check if the input number is an Armstrong number
    bool isArmstrong = checkArmstrong(num);


    // Output the result
    if(isArmstrong) {
        std::cout << "Given number is a Armstrong number.";
    } else {
        std::cout << "Given number is not a Armstrong number";
    }
    
    return 0;
}