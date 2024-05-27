//Pattern: Butterfly (day-10 : Problem-1)  
#include <iostream>

// Function to print Butterfly pattern
void printButterfly(int n)
{
    // Print upper part of the butterfly
    for (int row = 0; row < n; row++) {
        // Print stars for the left wing
        for (int col = 0; col <= row; col++) {
            std::cout << "*";
        }

        // Print spaces between wings
        for (int space = 0; space < 2 * (n - row - 1); space++) {
            std::cout << " ";
        }

        // Print stars for the right wing
        for (int col = 0; col < row + 1; col++) {
            std::cout << "*";
        }

        std::cout << '\n';
    }

    // Print lower part of the butterfly
    for (int row = 0; row < n; row++) {
        // Print stars for the left wing
        for (int col = 0; col < n - row; col++) {
            std::cout << "*";
        }

        // Print spaces between wings
        for (int space = 0; space < 2 * row; space++) {
            std::cout << " ";
        }

        // Print stars for the right wing
        for (int col = 0; col < n - row; col++) {
            std::cout << "*";
        }

        std::cout << '\n';
    }
}

int main() 
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    printButterfly(n);
    return 0;
}
