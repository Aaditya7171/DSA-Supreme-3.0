#include<vector>
#include<string>
using namespace std;

class Solution{
    public:
    bool isSafe(int newx, int newy, vector<vector<int>> &m, vector<vector<bool>> &visited, int n){
        if(newx < 0 || newy < 0 || newx >= n || newy >= n){
            return false;//out of bound
        }
        if(visited[newx][newy] == true){
            return false;//already visited
        }
        if(m[newx][newy] == 0){
            return false;//blocked space
        }
        return true;//valid case
    }
    void solve(vector<vector<int>> &m, vector<vector<bool>> &visited, int n, vector<string> &ans, int srcx, int srcy, int destx, int desty, string output) {
        if(srcx == destx && srcy == desty){
            //rat reached the destination, store ans in output string(base case)
            ans.push_back(output);
            return;
        }
        //recursion
        //up
        int newx = srcx-1;
        int newy = srcy;
        if(isSafe(newx, newy, m, visited, n)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx, desty,output+"U");
            //when backtracking, mark visited as false
            visited[newx][newy] = false;
        } 
        //down
        newx = srcx+1;
        newy = srcy;
        if(isSafe(newx, newy, m, visited, n)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx, desty,output+"D");
            //when backtracking, mark visited as false
            visited[newx][newy] = false;
        } 
        //left
        newx = srcx;
        newy = srcy-1;
        if(isSafe(newx, newy, m, visited, n)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx, desty,output+"L");
            //when backtracking, mark visited as false
            visited[newx][newy] = false;
        } 
        //right
        newx = srcx;
        newy = srcy+1;
        if(isSafe(newx, newy, m, visited, n)){
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx, desty,output+"R");
            //when backtracking, mark visited as false
            visited[newx][newy] = false;
        } 
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<bool>> visited(n, vector<bool>(n,0));
        int srcx = 0, srcy = 0;
        visited[0][0] = true;
        int destx = n - 1, desty = n - 1;
        string output = "";
          
        if(m[0][0] == 0){
            return ans;
        }
        
        solve(m,visited,n,ans,srcx,srcy,destx,desty,output);
        
        return ans;
    }
};