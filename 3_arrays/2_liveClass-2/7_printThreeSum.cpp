#include<iostream>

void checkThreeSum(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++){
                if((arr[i] + arr[j] + arr[k]) == target){
                    std::cout << arr[i] << ", " << arr[j] << ", " << arr[k] << '\n';
                }
            }
        }
    }
}

int main(){
    int arr[] = {10,20,30,40};
    int target = 70;
    int size = 4;
    checkThreeSum(arr, size, target);

}