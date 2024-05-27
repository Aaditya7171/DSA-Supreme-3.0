#include<iostream>

void printAllTriplets(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            for(int k = 0; k < size; k++) {
                std::cout << arr[i] << ", " << arr[j] << "' " << arr[k] <<  '\n';
                count++;
            }
        }
    }
    std::cout << "Total triplets printed: " << count;
}

int main(){

    int arr[4] = {10,20,30,40};
    int size = 4;

    printAllTriplets(arr, size);

    return 0;
}