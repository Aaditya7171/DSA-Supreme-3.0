#include <iostream>

int main()
{

    int n;
    std::cout << "Enter side: ";
    std::cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || row == n || row == n - 1 || col == 0 || row == n - col - 1)
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