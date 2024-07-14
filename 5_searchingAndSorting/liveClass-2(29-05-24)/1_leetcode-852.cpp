#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    

    //Ap-1 using binary search
    // int n = arr.size();
    // int s = 0;
    // int e = n - 1;

    // while(s<e){
    //     int mid = s + (e - s) / 2;
    //     if(arr[mid] < arr[mid + 1]){
    //         s = mid + 1;
    //     }
    //     else { 
    //         e = mid;
    //     }
    // }
    // return s;

    //Store and compute--->
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ansIndex = -1;

    while(s<=e){
        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else { 
            ansIndex = mid;
            e = mid-1;
        }
    }
    return ansIndex;

    //O(n) complexity solution-->
    // int max = INT_MIN;
        // int maxIndex = -1;
        // for(int i = 0; i < arr.size(); i++){
        //     if(arr[i] > max){
        //         max = arr[i];
        //         maxIndex = i;
        //     }
        // }
        // return maxIndex;

        // using stl, but we cant get index in this way-->
        // auto it = max_element(arr.begin(), arr.end());
        // int ans = *it;
        // return index
    }
};