#include<iostream>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        //accesing and printing elements of array
        std::cout << "Element of array index " << i << " is: ";
        std::cout << i[arr];
        std::cout << '\n';
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    
    //taking input of array elements
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter element of array index " << i << " : ";
        std::cin>> i[arr];//arr[i] == i[arr]--> *(arr+i) == *arr(i+arr)
        std::cout << '\n';
    }

    printArray(arr, size);

    return 0;
}