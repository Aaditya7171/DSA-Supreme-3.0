#include<iostream>
#include<climits>

void countNum(int arr[], int size)
{
    int count0s = 0;
    int count1s = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count0s++;
        }
        if(arr[i] == 1) {
            count1s++;
        }
    }
    
    std::cout << "Number of 0's element: " << count0s << '\n';

    std::cout << "Number of 1's element: " << count1s << '\n';
    
    return;
}

int main() 
{
    int arr[100];

    int size;

    std::cout << "Enter the number of elements: ";

    std::cin>> size;

    std::cout << "Enter elements either 0 or 1: ";

    for(int i =0; i < size; i++) {
        std::cin>> arr[i];
    }

    countNum(arr, size);
    return 0;
}