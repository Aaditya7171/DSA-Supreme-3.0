#include<iostream>
#include<climits>

int findMaxElementIn2dArray(int arr[3][4], int rowSize, int colSize){
    int maxValue = INT_MIN;
     for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++){
            maxValue = std::max(maxValue, arr[row][col]);
        }
    }
    //overAll time complexity: O(rowSize * colSize)
    //overAll space complexity: O(1)
    return maxValue;
}

int main()
{
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,33,34}
    };

    int rowSize = 3, colSize = 4;

    int maxElement = findMaxElementIn2dArray(arr, rowSize, colSize);

    std::cout << maxElement;
    
    return 0;
}