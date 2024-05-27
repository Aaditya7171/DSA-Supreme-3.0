//the array is having only 0's and 1's as it's elements
#include<iostream>

void print2sComplement(int arr[], int size)
{

    //taking an temporary array that stores 1's complement of "arr"
    int tempArr[size] = {};
    //calculating 1's complement
    for(int i = 0; i < size; i++){
        tempArr[i] = !arr[i];
    }
    //printing 1's complement
    std::cout << '\n' << "1's complement: ";
    for(int i = 0; i < size; i++){
        std::cout << tempArr[i] << " ";
    }
    
    //caclulating 2's complement
    int carry = 1;
    for(int i = size - 1; i >= 0; i--){
        tempArr[i] += carry;
        if(tempArr[i] > 1){
            tempArr[i] = 0;
            carry = 1;
        }
        else{
            carry = 0;
        }
    }
        //printing 2's complement
    std::cout << '\n' << "2's complement: ";
    for(int i = 0; i < size; i++){
        std::cout << tempArr[i] << " ";
    }
}

int main()
{
    int arr[] = {1,1,1,1};//(edge case not covered where carry remains 1 at the end)
    int size = sizeof(arr) / sizeof(int);

    print2sComplement(arr, size);

    return 0;
}