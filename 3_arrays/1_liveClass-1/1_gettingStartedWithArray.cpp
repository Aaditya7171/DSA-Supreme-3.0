#include<iostream>

int main()
{
    //creation
    int arr[10];
    //declaration
    int arr1[] = {10,20,30,40};
    int arr2[4] = {1};
    //accesing
    std::cout << arr2[10] << '\n'; //garbage value(compiler dependent)
    std::cout << arr[1] << '\n';//garbage value
    std::cout << arr2[0] << '\n';//1
    std::cout << arr1[0] << '\n';//10
    std::cout << arr2[2] << '\n';//0
    
}