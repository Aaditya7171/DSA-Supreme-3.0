#include<iostream>
#include<vector>

void selectionSort(std::vector<int> &arr){

    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

//for desc order : change if() --> if(arr[j] > arr[minIndex]) 

int main() {

    std::vector<int> arr = {-53,32,1,4,0,532,24,5,-432,34,531};
    
    selectionSort(arr);

    for(int i : arr){
        std::cout << i << " ";
    }

    return 0;
}