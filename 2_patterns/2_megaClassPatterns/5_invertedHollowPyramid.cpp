#include<iostream>

void printInvertedHollowPyramid(int n)
{
    for(int row = 0; row < n; row ++) {
        for(int space = 0; space < row; space++){
            std::cout << " ";
        }
        for(int col = 0; col < n - row; col++){
            if(row == 0 || col == 0 || row == n - 1 || col == n - row - 1){
                std::cout << "* ";
            }
            else{
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }
}

int main()
{
    int n;

    std:: cout<< "Enter n: ";

    std::cin>> n;

    printInvertedHollowPyramid(n);

    return 0;
}