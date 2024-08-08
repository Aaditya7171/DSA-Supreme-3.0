#include <iostream>

void printButterfly(int n)
{
    for (int row = 0; row < n; row++) {
        for (int col = 0; col <= row; col++) {
            std::cout << "*";
        }
        for (int space = 0; space < 2 * (n - row - 1); space++) {
            std::cout << " ";
        }
        for (int col = 0; col < row + 1; col++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row; col++) {
            std::cout << "*";
        }
        for (int space = 0; space < 2 * row; space++) {
            std::cout << " ";
        }
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
