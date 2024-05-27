#include<iostream>

int main()
{
    int arr[5] = {};
    
    //taking input of array elements
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter element of array index " << i << " : ";
        std::cin>> arr[i];
        std::cout << '\n';
    }

     //accesing and printing elements of array
    for(int i = 0; i < 5; i++) {
        std::cout << "Element of array index " << i << " is: ";
        std::cout << arr[i];
        std::cout << '\n';
    }
    return 0;
}