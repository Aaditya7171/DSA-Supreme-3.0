#include<iostream>

bool search2dArray(int arr[3][4], int rowSize, int colSize, int target){
 
     for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++){

            if(arr[row][col] == target)
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,33,34}
    };

    int rowSize = 3, colSize = 4, target = 1;

    bool ans = search2dArray(arr, rowSize, colSize, target);

    std::cout << ans;
    

}