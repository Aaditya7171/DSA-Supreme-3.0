#include<iostream>
#include<climits>

int findMinElementIn2dArray(int arr[3][4], int rowSize, int colSize){
    int minValue = INT_MAX;
     for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++){
            minValue = std::min(minValue, arr[row][col]);
        }
    }
    return minValue;
}

int main()
{
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,33,34}
    };

    int rowSize = 3, colSize = 4;

    int minElement = findMinElementIn2dArray(arr, rowSize, colSize);

    std::cout << minElement;
    
    return 0;
}