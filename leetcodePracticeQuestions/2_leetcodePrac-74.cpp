#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          
        int n1 = matrix.size();
        int n2 = matrix[0].size();
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < n2; j++)
            {
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};