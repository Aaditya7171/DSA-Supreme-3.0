#include<vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int rSize = matrix.size();
        int cSize = matrix[0].size();
        for(int i = 0; i < rSize; i++){
            for(int j = 0; j < cSize; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};