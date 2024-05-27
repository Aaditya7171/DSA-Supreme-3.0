#include<iostream>
#include<climits>

int findMax(int arr[], int size)
{
    int maxAns = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}

int main() 
{
     int arr[100];

    int size;

    std::cout << "Enter the number of elements: ";

    std::cin>> size;

    std::cout << "Enter elements: ";

    for(int i =0; i < size; i++) {
        std::cin>> arr[i];
    }

    std::cout << "Max element: " << findMax(arr, size);

    return 0;
}