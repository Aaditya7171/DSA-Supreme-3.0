#include<iostream>

void printOddElements(int arr[], int size, int index)
{
    //base case
    if(index == size){
        return;
    }
    //1 case
    if(arr[index] & 1){
        std::cout << arr[index] << " ";
    }
    //recursive call
    printOddElements(arr, size, index+1);
}

int main()
{
    int arr[] = {1 ,11,12,13,14,15,16,17};
    int size = 8;
    int index = 0;

    printOddElements(arr, size, index);

    return 0;
}