#include<iostream>

int main()
{
    int arr[3] = {10, 120, 30};

    std::fill(arr, arr+3, 25);//arr+1:1 element, arr+3 : 3 elements

    std::cout << arr[0] << '\n';

    std::cout << arr[1] << '\n';

    std::cout << arr[2] << '\n';
    
}