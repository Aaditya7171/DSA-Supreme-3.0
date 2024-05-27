#include<iostream>
#include<algorithm>
#include<cmath>


int main(){
    int arr[5][5] = {};
    int rowSize = 5;
    int colSize = 5;

    
    // Using std::fill() to fill the entire 2D array with the value 5
    // Syntax of std::fill():
    // std::fill(startIterator, endIterator, value);
    // startIterator: Iterator pointing to the beginning of the range to be filled
    // endIterator: Iterator pointing to one past the last element of the range to be filled
    // value: The value to fill the range with
    //The &arr[0][0] expression provides a pointer to the first element of the array, and &arr[0][0] + rowSize * colSize provides a pointer to one past the last element of the array. These pointers together define the entire range of the 2D array, which can be then used with std::fill() to fill the array with the desired value.
    std::fill(&arr[0][0], &arr[0][0] + rowSize * colSize, 5);
    

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
             std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
}