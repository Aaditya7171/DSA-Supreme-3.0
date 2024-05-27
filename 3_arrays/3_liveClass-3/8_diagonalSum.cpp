#include<iostream>

void printDiagonalSum(int arr[4][4], int rowSize, int colSize){
    int sum = 0;
     for(int col = 0; col < colSize; col++) {
        
        for(int row = 0; row < rowSize; row++){
            if(row == col)
            sum = sum + arr[row][col];
        }
    }
    std::cout << "sum of diagonal is: " << sum << '\n';
}

// void printDiagonalSumMethod2(int arr[4][4], int rowSize, int colSize){
//     int sum = 0;
//         for(int row = 0; row < rowSize; row++){
//             sum = sum + arr[row][col];
//         }
//     std::cout << "sum of diagonal is: " << sum << '\n';
// }

int main()
{
    int arr[4][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,33,34},
        {40,41,42,43}
    };

    int rowSize = 4, colSize = 4;

    printDiagonalSum(arr, rowSize, colSize);
    // printDiagonalSumMethod2(arr, rowSize, colSize);
    return 0;
}