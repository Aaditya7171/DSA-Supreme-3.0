#include<iostream>

void printEvenElements(int arr[], int size, int index)
{
    //base case
    if(index == size){
        return;
    }
    //1 case
    if(!(arr[index] & 1)){
        std::cout << arr[index] << " ";
    }
    //recursive call
    printEvenElements(arr, size, index+1);
}

int main()
{
    int arr[] = {10,11,12,13,14,15,16,17};
    int size = 8;
    int index = 0;

    printEvenElements(arr, size, index);

    return 0;
}