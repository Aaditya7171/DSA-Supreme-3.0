#include<iostream>

int main()
{
    // declare 2D array--->
    // int arr[4] [3];

    //initialize-->
    // int arr[3][3] = {
    //     {10,20,25},
    //     {30,40,45},
    //     {50,60,65}
    // };
    // int rowSize = 3;
    // int colSize = 3;

    // std::cout << arr[2][1] ;

    //traverse the entire array--->    
    //method - 1 : row-wise traversal->

    // for(int i = 0; i < rowSize; i++){
    //     for(int j = 0; j < colSize; j++){
    //         std::cout << arr[i][j] << " ";
    //     }
    //     std::cout << '\n';
    // }

    //method - 2 : column-wise traversal->
    // for(int col = 0; col < colSize; col++){
    //     for(int row = 0; row < rowSize; row++){
    //         std::cout << arr[row][col] << " ";
    //     }
    //     std::cout << '\n';
    // }

    //method - 3 :diagonal matrix(works perfectly on square matrix only) traversal->
    // for(int col = 0; col < colSize; col++){
    //     for(int row = 0; row < rowSize; row++){
    //         if(row == col)
    //         std::cout << arr[row][col] << " ";
    //     }
    //     std::cout << '\n';
    // }

    //input in 2-D array--->
    int arr1[2][3];
    int rowSize = 2;
    int colSize = 3;

    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++){
            std::cout << "Enter the value for (" << row << ", " << col << ")";
            std::cin>>arr1[row][col];
        }
        std::cout << '\n';
    }
    //printing array
     for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++){
            std::cout << arr1[row][col] << " ";
        }
        std::cout << '\n';
    }


    return 0;
}