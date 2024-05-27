#include<iostream>

int main()
{
    int arr[5] = {};
    
    //taking input of array elements
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter element of array index " << i << " : ";
        std::cin>> i[arr];//arr[i] == i[arr]--> *(arr+i) == *arr(i+arr)
        std::cout << '\n';
    }

     //accesing and printing elements of array
    for(int i = 0; i < 5; i++) {
        std::cout << "Element of array index " << i << " is: ";
        std::cout << i[arr];
        std::cout << '\n';
    }
    return 0;
}