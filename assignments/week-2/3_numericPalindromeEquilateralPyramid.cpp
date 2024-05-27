#include<iostream>

void printNumericPalindromeEquilateralPyramid(int n)
{
    for(int row = 0; row < n; row++){
        for(int space = 0; space <= n-row; space++){
            std::cout << "  ";
        }
        for(int col = 0; col <= row; col++){
            std::cout << col+1 << " ";
        }
        for(int col = row; col >0 ; col--){
            std::cout << col << " ";
        }
        std::cout << '\n';
    }

}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    printNumericPalindromeEquilateralPyramid(n);

    return 0;
}