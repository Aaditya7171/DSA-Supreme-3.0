#include <iostream>

void printInvertedPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < row; space++)
        {
            std::cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            std::cout << "* ";
        }
        std::cout << '\n';
    }
}

int main()
{
    int n;

    std::cout << "Enter n: ";

    std::cin >> n;

    printInvertedPyramid(n);

    return 0;
}