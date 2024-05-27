#include<iostream>

void printDiagonalPairs(int arr[3][3], int rowSize, int colSize)
{
    int sum = 0;
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(row == col) {
                sum = (sum + arr[row][col]);
            }
        }
        std::cout << '\n';
    }
    std::cout << "Sum of anti-diagonal elements: " << sum << '\n';
 
    int sum2 = 0;
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            if(row + col == rowSize - 1) {
                sum2 = (sum2 + arr[row][col]);
            }
        }

    }
    std::cout << "Sum of anti-diagonal elements: " << sum2 <<  '\n';
}

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,4,4},
        {10,8,9}
    };
    int rowSize = 3;
    int colSize = 3;

    printDiagonalPairs(arr, rowSize, colSize);

    return 0;
}