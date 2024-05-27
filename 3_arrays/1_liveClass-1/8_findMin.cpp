#include<iostream>
#include<climits>

int findMin(int arr[], int size)
{
    int minAns = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    return minAns;
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

    std::cout << "Min element: " << findMin(arr, size);

    return 0;
}