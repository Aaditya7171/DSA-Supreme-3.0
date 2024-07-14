#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows =matrix.size();
        int cols = matrix[0].size();

        int n = rows * cols;

        int s = 0;
        int e = n - 1;
        int mid = s + (e-s) / 2;
        
        while (s <= e){
            int rowIndex = mid / cols;
            int colIndex = mid % cols;

            if((matrix[rowIndex][colIndex]) == target){
                return true;
            }
            if((matrix[rowIndex][colIndex]) < target){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return false;
    }
};
//t.c. - O(log(row * col)) 