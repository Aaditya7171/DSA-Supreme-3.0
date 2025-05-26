#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> v){
    int n = v.size();
    int m = v[0].size();
    for(int sCol = 0; sCol < n; sCol++){
        //even no of columns->top to bottem
        if((sCol & 1) == 0){
            for(int i = 0; i < n; i++){
                cout << v[i][sCol] << ", ";
            }
        }
        else {
            //odd no of columns->bottem to top
            for(int i = m - 1; i >= 0; i--){
                cout << v[i][sCol] << ", ";
            }
        }
    }
}

int main(){
    vector<vector<int>> v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    wavePrint(v);
    return 0;
}
