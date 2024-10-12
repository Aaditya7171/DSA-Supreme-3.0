#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> lowerDiagonalCheck;
    unordered_map<int, bool> upperDiagonalCheck; 

    void storeSolution(vector<vector<string>> &ans, vector<vector<char>> &board, int n){
        vector<string> tempAns;
        for(int i = 0; i < n; i++){
            string output = "";
            for(int j = 0; j < n; j++){
                output.push_back(board[i][j]);
            }
            tempAns.push_back(output);
        }
        ans.push_back(tempAns);
    }
    bool isSafe(int row, int col, vector<vector<char>> &board){
        //bruteForce: traverse the board -> O(n^2)
        //Linear T.C. ->  O(1)

        //row
        if(rowCheck[row] == true){
            return false;
        }
        //upper diagonal
        if(upperDiagonalCheck[row - col]){
            return false;
        }
        //lower diagonal
        if(lowerDiagonalCheck[row + col]){
            return false;
        }
        return true;
    }
    void solve(int n, vector<vector<char>> &board, vector<vector<string>> &ans, int col){
        if(col >= n){
            //all queens are placed, store arrangement in ans
            storeSolution(ans, board, n);
            return;
        }
        //we have index of col, we are deciding here that in which row of the col, queen should be placed
        for(int row = 0; row < n; row++){
            //place the queen in a row that is safe
            if(isSafe(row, col, board)){
                board[row][col] = 'Q';
                rowCheck[row] = true;
                lowerDiagonalCheck[row + col] = true;
                upperDiagonalCheck[row - col] = true;
                solve(n, board, ans, col+1); 
                board[row][col] = '.';//backtrack(while returning, make sure to keep the board unchanged)
                rowCheck[row] = false;
                lowerDiagonalCheck[row + col] = false;
                upperDiagonalCheck[row - col] = false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        solve(n, board, ans, 0);
        return ans;
    }
};