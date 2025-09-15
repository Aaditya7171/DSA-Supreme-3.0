class Solution {
public:
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> lowerDiagonalCheck;
    unordered_map<int, bool> upperDiagonalCheck; 

    bool isSafe(int row, int col, vector<vector<char>> &board){
        if(rowCheck[row] == true){
            return false;
        }
        if(upperDiagonalCheck[row - col]){
            return false;
        }
        if(lowerDiagonalCheck[row + col]){
            return false;
        }
        return true;
    }
    void solve(int n, vector<vector<char>> &board, vector<vector<string>> &ans, int col, int& nq){
        if(col >= n){
            nq++;;
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board)){
                board[row][col] = 'Q';
                rowCheck[row] = true;
                lowerDiagonalCheck[row + col] = true;
                upperDiagonalCheck[row - col] = true;
                solve(n, board, ans, col+1, nq); 
                board[row][col] = '.';
                rowCheck[row] = false;
                lowerDiagonalCheck[row + col] = false;
                upperDiagonalCheck[row - col] = false;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        int nq = 0;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        solve(n, board, ans, 0, nq);
        return nq;
    }
};