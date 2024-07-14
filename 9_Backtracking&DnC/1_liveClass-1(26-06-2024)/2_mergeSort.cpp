#include<iostream>

void merge(int arr[], int s, int e, int mid){
     
    //create left and right arrays
    int leftLen = mid - s + 1;
    int rightLen = e - mid;

    // int *leftArr = new int[leftLen];//using a heap memory is a better practice
    // int *rightArr = new int[rightLen];

    int leftArr[leftLen];
    int rightArr[rightLen];

    //fill or copy the  left and right arrays
    //copying values of original array
    int index = s;
    //copying into left array
    for(int i = 0; i < leftLen; i++){
        leftArr[i] = arr[index];
        index++;
    }
    //copying into right array
    index = mid + 1;
    for(int i = 0; i < rightLen; i++){
        rightArr[i] = arr[index];
        index++;
    }


    //merge logic
    int leftIndex = 0, rightIndex = 0, mainArrayIndex = s;

    while(leftIndex < leftLen && rightIndex < rightLen){
        if(leftArr[leftIndex] < rightArr[rightIndex]){
            arr[mainArrayIndex] = leftArr[leftIndex];
            leftIndex++, mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] = rightArr[rightIndex];
            mainArrayIndex++, rightIndex++;
        }
    }

    while(leftIndex < leftLen){
        arr[mainArrayIndex] = leftArr[leftIndex];
        leftIndex++, mainArrayIndex++;
    }

    while(rightIndex < rightLen){
        arr[mainArrayIndex] = rightArr[rightIndex];
        rightIndex++, mainArrayIndex++;
    }
    
    //clearing the memory of the heap is a good practice
    // delete[] leftArr;
    // delete[] rightArr;

}

void mergeSort(int arr[], int s, int e){

    //base case

    if(s >= e){
        return;//invalid array || single element array
    }

    int mid = (s+e)/2;

    //sort left part using recursion
    mergeSort(arr, s, mid);

    //sort right part using recursion
    mergeSort(arr, mid+1, e);

    //merge left & right parts

    merge(arr,s,e,mid);

}

int main(){

    int arr[] = {10,80,110,90,50,30,40,20};
    int size = 8;
    int s = 0, e = size - 1;

    mergeSort(arr, s, e);

    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    
    return 0;
}