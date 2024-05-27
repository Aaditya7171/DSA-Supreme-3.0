#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> findMissingElement(vector<int>arr, int &ans){
    
    int n = arr.size();

    vector<int>temp(n+1);

    for(int i = 0; i < n+1; i++){
        temp[i] = i;
    }
    int arrSum = 0;
    for(int i = 0; i < n; i++){
        arrSum = arr[i] + arrSum;
    }
    int tempSum = 0;
    for(int i = 0; i < n+1; i++){
        tempSum = temp[i] + tempSum;
    }
    ans = tempSum - arrSum;
}

int main() {

    vector<int> arr = {0,1,2,4};

    int ans;

    findMissingElement(arr, ans);

    cout << "Missing element is: " << ans;
}