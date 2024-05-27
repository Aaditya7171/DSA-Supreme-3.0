#include<iostream>
#include<algorithm>

int findUniqueNumberApproach2(int arr[], int size)
{
    std::sort(arr, arr+size);
    // for(int i = 0; i < size; i+=2){
    //     for(int j = i+1; j <= i+1; j++){
    //         if(arr[i] != arr[j]){
    //             return arr[i];
    //         }
    //     }
    // }
    for(int i = 0; i < size; i+=2){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }
}

int main(){

    int arr[7] = {1,1,2,3,2,3,102};
    int size = 7;

    int ans = findUniqueNumberApproach2(arr, size);
    std::cout << "Unique number is: " << ans;

    return 0;
}