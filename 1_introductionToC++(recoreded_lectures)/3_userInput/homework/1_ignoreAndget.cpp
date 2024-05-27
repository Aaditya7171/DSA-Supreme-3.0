#include<iostream>

int main() {
    // Explanation of cin.get() and cin.ignore():
    // cin.get() reads a single character from the input stream "std::cin".
    // It reads the next character in the input buffer, including whitespace characters (e.g., space, newline).
    // It does not skip leading whitespace characters by default.

    // cin.ignore() discards characters from the input buffer.
    // It allows you to ignore a specified number of characters or stop discarding at a certain delimiter character.
    // In this example, cin.ignore(100, ' ') discards up to 100 characters or until the first space character is encountered.
    // This is useful for clearing unwanted characters, such as newline characters left in the buffer after previous input operations.

    char first, last;

    std::cout << "Enter your first name followed by your surname: ";

    first = std::cin.get(); // Input one character
    std::cin.ignore(100, ' '); // Ignore until space
    //std::cin.ignore(2, ' '); 
    //std::cin.ignore(4, ' '); 

    last = std::cin.get();
    std::cout << "Your initials are " << first << last << "\n";

    return 0;
}
