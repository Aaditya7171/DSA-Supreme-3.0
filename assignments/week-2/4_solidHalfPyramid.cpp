#include<iostream>

void printSolidHalfPyramid(int n)
{
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            std::cout << "* ";
        }
        std::cout << '\n';
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row - 1; col++){
            std::cout << "* ";
        }
        std::cout << '\n';
    }
}

void printSolidHalfPyramidAp2(int n)
{
    for(int row = 0; row < (2 * n) - 1; row++){
        int cond = row < n ? row : n - (row % n) - 2;
        for(int col = 0; col <= cond; col++){
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

    // printSolidHalfPyramid(n);
    printSolidHalfPyramidAp2(n);

    return 0;
}