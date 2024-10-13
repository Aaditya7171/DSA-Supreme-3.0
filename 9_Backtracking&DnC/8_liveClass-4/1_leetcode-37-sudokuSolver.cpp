#include<vector>
using namespace std;

class Solution {
public:
    bool isSafe(int digit, int i, int j, vector<vector<char>>& board) {
        // we have to check 3 rules
        //1. rowCheck
        for(int k = 0; k < board.size(); k++){
            if(board[i][k] == digit){
                //that means same digit already exists in the same row
                return false;
            }
        }
        //2. colCheck
        for(int k = 0; k < board.size(); k++){
            if(board[k][j] == digit){
                //that means same digit already exists in the same column
                return false;
            }
        }
        //3. 3*3 Sub box check
        for(int k = 0; k < board.size(); k++){
            if(board[3 * (i / 3) + (k / 3)][3 * (j / 3) + (k % 3)] == digit){
                //same digit already exists in the same 3*3 box
                return false;
            }
        }
        //if all the rules are followed
        return true;
    }
    bool solve(vector<vector<char>>& board){
        //base case
        //we don't need a explicit B.C. because in every recursive call, 1 box is getting filled
        //and total number of boxes are limited(n*n) and there will be a case when all the boxes will be filled
        //and there will not be any recursive call 
        
        // 1 case that we have to solve, rest will be handled by recursion
        //1. find the empty cell
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                //we are at cell i,j
                //but how we'll know that cell is empty as we have to fill only the empty cells
                if(board[i][j] == '.'){
                    //empty cell found, we have to fill it by following all the rules(hit and trial
                    for(char digit = '1'; digit <= '9'; digit++){
                        //how we'll know that which digit should be placed at that position(safe)
                        if(isSafe(digit, i, j, board) == true){
                            board[i][j] = digit;
                            //we placed on digit, rest we'll pass to recursion to solve
                            //we'll get to know by the below call that the rest of the board(next) is solved or not
                            //if the rest of the board is solved that means we placed the digit at the right place
                            bool checkRestBoard =  solve(board);
                            if(checkRestBoard == true){
                                //the whole board is solved
                                return true;
                            }
                            else{
                                //this is the case where we placed a digit but recursion returned false
                                //the rest of the board is not solved, that means our previous answer is wrong
                                //so we need to backtrack
                                board[i][j] = '.';//revert the changes
                            }
                        }
                    }
                    //if we came out of for(){board is not solved->if():false} because no digits from 1 to 9 are fitting
                    //that means previous answer is wrong
                    return false;
                }
            }
        }
        //if we came here that means, board is completely filled
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};