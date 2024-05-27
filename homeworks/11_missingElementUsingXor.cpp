#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> findMissingElement(vector<int>arr, int &ans){
    
    int n = arr.size();

    vector<int>temp(n);

    for(int i = 0; i < n + 1; i++){
        temp[i] = i;
    }
     
    for(int i = 0; i < n; i++){
        if((arr[i] ^ temp[i]) != 0){
            ans = temp[i];
            break;
        }
    }
}

int main() {

    vector<int> arr = {0,1,2,4,5};

    int ans = -1;

    findMissingElement(arr, ans);

    cout << "Missing element is: " << ans;
}