#include<iostream>

void printDiagonalPairs(int arr[3][3], int rowSize, int colSize)
{
    std::cout << "Diagonal elements: " << '\n';
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(row == col) std::cout << arr[row][col] << " ";
        }
        std::cout << '\n';
    }
    std::cout << "Anti-diagonal elements: " << '\n';
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            // int rowIndex = row;
            // int colIndex = colSize - col;
            if(row + col == rowSize - 1) std::cout << arr[row][col] << " ";
        }
        std::cout << '\n';
    }
}

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rowSize = 3;
    int colSize = 3;

    printDiagonalPairs(arr, rowSize, colSize);

    return 0;
}