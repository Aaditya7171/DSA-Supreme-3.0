#include<iostream>
#include<algorithm>
#include<climits>


void findMissingElement(int arr[], int n, int& ans){
    for(int i = 0; i < n; i++){
        int index = abs(arr[i]);
        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            std::cout << i+1 << "  ";
        }
    }
}

void sortAndSwap(int arr[], int n){
    int i = 0;
    while(i < n){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            std::swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] != i + 1){
            std::cout << i + 1 << " ";
        }
    }
}

int main(){
    int arr[] = {1,3,3,3,4};
    int n = sizeof(arr) / sizeof(int);
    int ans = INT_MIN;
    sortAndSwap(arr,n);

    return 0;
}