#include<iostream>

void printDiagonalPairs(int arr[3][3], int rowSize, int colSize)
{
    std::cout << "Anti-diagonal elements: " << '\n';
    int col = rowSize - 1;
    for(int row = 0; row < rowSize; row++) {
        std::cout << arr[row][col--] << " ";
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