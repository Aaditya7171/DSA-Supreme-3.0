//Leetcode 48. Rotate Image

#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Step 1: Transpose the matrix
        int n = matrix.size(); // number of rows
        int m = matrix[0].size(); // number of columns

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
    // Time complexity: O(n^2)
    // Space complexity: O(1) (since the rotation is done in place)
};
