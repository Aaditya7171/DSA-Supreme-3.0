#include <iostream>

int main()
{

    int n;
    std::cout << "Enter side: ";
    std::cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == 1 || row == (n - 1) || row == col || col == 0)
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
    return 0;
}