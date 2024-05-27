//Check input number is palindrome or not(day-6 : problem-1)
#include<iostream>

    bool checkPalindrome(int n) 
    {
        int unmodifiedNum = n; // Store the original number
        //reversing the number
        int reverse = 0;
        while(n != 0) {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }
        //checking if input is equal to reversed number
        if(reverse == unmodifiedNum) {
            return true;
        } else {
            return false;
        }
    }

    int main() 
    {
        int num;

        std::cout << "Enter a number: ";

        std::cin >> num;

        bool isPalindrome = checkPalindrome(num);

        if(isPalindrome) {
            std::cout << "Entered number " << num << " is a palindrome";
        } else {
            std::cout << "Entered number is not a palindrome.";
        }
        return 0;
    }