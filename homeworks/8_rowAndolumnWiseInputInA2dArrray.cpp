#include<iostream>

int main()
{

    int arr1[2][3];
    int rowSize = 2;
    int colSize = 3;

    //row-wise input 
    // for(int row = 0; row < rowSize; row++) {
    //     for(int col = 0; col < colSize; col++){
    //         std::cout << "Enter the value for (" << row << ", " << col << ")";
    //         std::cin>>arr1[row][col];
    //     }
    //     std::cout << '\n';
    // }
    
    //col-wise input
    for(int col = 0; col < colSize; col++) {
        for(int row = 0; row < rowSize; row++){
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