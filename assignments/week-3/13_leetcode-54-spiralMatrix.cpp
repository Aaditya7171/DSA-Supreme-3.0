class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int>ans;
            int m = matrix.size();
            int n = matrix[0].size();
            int totalElems = m * n;
    
            int sRow = 0, eCol = n - 1, eRow = m - 1, sCol = 0;
    
            int count = 0;
            while(count < totalElems){  
                for(int i = sCol; i <= eCol && count < totalElems; i++){
                    ans.push_back(matrix[sRow][i]);
                    count++;
                }
                sRow++;
                for(int i = sRow; i <= eRow && count < totalElems; i++){
                    ans.push_back(matrix[i][eCol]);
                    count++;
                }
                eCol--;
                for(int i = eCol; i >= sCol && count < totalElems; i--){
                    ans.push_back(matrix[eRow][i]);
                    count++;
                }
                eRow--;
                for(int i = eRow; i >= sRow && count < totalElems; i--){
                    ans.push_back(matrix[i][sCol]);
                    count++;
                }
                sCol++;
            }
            return ans;
        }
    };