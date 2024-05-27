#include<iostream>

void printAllPairs(int arr[], int size)
{
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cout << arr[i] << ", " << arr[j] << '\n';
        }
    }
}

int main(){

    int arr[4] = {10,20,30,40};
    int size = 4;

    printAllPairs(arr, size);

    return 0;
}