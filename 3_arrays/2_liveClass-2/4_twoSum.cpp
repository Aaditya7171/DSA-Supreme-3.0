#include<iostream>

bool checkTwoSum(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if((arr[i] + arr[j]) == target){
                return true;//pair found
            }
        }
    }
    return false; //pair not found
}

int main(){

    int arr[5] = {10,5,20,15,30};
    int size = 5;

    bool ans =checkTwoSum(arr, size, 35);

    if(ans) {
        std::cout << "True";
    }
    else{
        std::cout << "False";
    }
    return 0;
}