#include <iostream>

void printHollowPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            std::cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || col == row)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }
}

int main()
{
    int n;

    std::cout << "Enter n :";

    std::cin >> n;

    printHollowPyramid(n);

    return 0;
}