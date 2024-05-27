#include<iostream>

void printHollowPyramid(int n)
{
    for(int row = 0; row < n; row ++) {
        for(int space = 0; space < n - row - 1; space++){
            std::cout << " ";
        }
        for(int col = 0; col < row+1; col++){
            if(row == 0 || col == 0 || col == row){
                std::cout << "* ";
            }   
            else{
                std::cout << "  ";
            }    
        }
        std::cout << '\n';
    }
}

void printInvertedHollowPyramid(int n)
{
    for(int row = 0; row < n; row ++) {
        for(int space = 0; space < row; space++){
            std::cout << " ";
        }
        for(int col = 0; col < n - row; col++){
            if(row == n - 1 || col == 0|| col == n - row - 1){
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

    std:: cout<< "Enter n :";

    std::cin>> n;

    printHollowPyramid(n);

    printInvertedHollowPyramid(n);

    return 0;
}