#include<iostream>

//using new empty array
void transposeMatrix(int arr[3][3], int rowSize, int colSize){
    
    int ans[100][100] = {0}; 

    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++) {
            ans[row][col] = arr[col][row];
        }
    }

    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++) {
            std::cout << ans[row][col] << " ";
        }
        std::cout << '\n';
    }
}

//using same array
void transposeMatrixUsingSwap(int arr[3][3], int rowSize, int colSize){

    for(int row = 0; row < rowSize; row++){
        for(int col = row; col < colSize; col++) {
            std::swap(arr[row][col],arr[col][row]);
        }
    }

    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++) {
            std::cout << arr[row][col] << " ";
        }
        std::cout << '\n';
    }
}
int main()
{
    int arr[3][3] = {
        {10,11,12},
        {20,21,22},
        {30,31,32}
    };

    int rowSize = 3, colSize = 3;

    // transposeMatrix(arr, rowSize, colSize);
    transposeMatrixUsingSwap(arr, rowSize, colSize);

    return 0;
}