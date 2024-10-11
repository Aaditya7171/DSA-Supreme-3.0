#include<iostream>
#include<vector>

void print(std::vector<int> &arr){
    for(int i : arr){
        std::cout << i << " ";
    }
}

void bubbleSort(std::vector<int> &arr){
    
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortDesc(std::vector<int> &arr){
    
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){

    std::vector<int> arr = {-54,98,3,78,897};

    bubbleSort(arr);
    print(arr);

    std::cout << "\n";
    
    bubbleSortDesc(arr);
    print(arr);

    return 0;
}