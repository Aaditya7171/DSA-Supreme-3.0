#include<iostream>

void printArr(int arr[], int size, int start){

    // base case
    if(start == size){
        return;
    }

    std::cout << arr[start] << " ";
    printArr(arr,size, start+1);

}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int size = 10;

    int start = 0;

    printArr(arr,size, start);

    return 0;
}