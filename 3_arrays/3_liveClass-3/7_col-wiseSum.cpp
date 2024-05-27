#include<iostream>

void printcolumnSum(int arr[3][4], int rowSize, int colSize){
 
     for(int col = 0; col < colSize; col++) {
        int sum = 0;
        for(int row = 0; row < rowSize; row++){
            sum = sum + arr[row][col];
        }
        std::cout << "sum of column " << col << " is: " << sum << '\n';
    }
}

int main()
{
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,33,34}
    };

    int rowSize = 3, colSize = 4;

    printcolumnSum(arr, rowSize, colSize);

    return 0;
}