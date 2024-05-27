#include<iostream>
#include<vector>
using namespace std;

bool search2dArray(vector<vector<int>> arr, int target) {
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            if(arr[row][col] == target)
            return true;
        }
    }
    return false;
}

int main(){
    //vector creation
    vector<vector<int>> arr(4, vector<int>(3,0));
 

    //printing elements of 2-d array created using vector
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    // for(int row = 0; row < rowSize; row++){
    //     for(int col = 0; col < colSize; col++){
    //         cout << arr[row][col] << " ";
    //     }
    //     std::cout << '\n';
    // }
    
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,33,34}
    };

    int rowSize = 3, colSize = 4, target = 1;

    bool ans = search2dArray(arr, target);

    std::cout << ans;
}