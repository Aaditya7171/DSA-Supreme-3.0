#include<iostream>
#include<vector>

void insertionSort(std::vector<int> &arr){
 
    int n = arr.size();
    for(int i = 1; i < n; ++i){
        int key = arr[i];
        int j = i - 1;

        //move elements of array (0 to i-1) that are greater than key to one position ahead of their current position(shifting)
        while(j >= 0 && key < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;//insertion
    }
}

int main() {

    std::vector<int> arr = {11,3,-123,0,431,-512,45};
    
    insertionSort (arr);
    
    for(int i : arr){
        std::cout << i << " ";
    }

    return 0;
}