#include<iostream>
#include<algorithm>

void sortZeroOne(int arr[], int size)
{
    int zeroCount = 0, oneCount = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1) {
            oneCount++;
        }
    }
    //insertion
    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }
    for(int i = zeroCount; i < size; i++) {
        arr[i] = 1;
    }
}

    //try sort()
    //try fill()
void sortZeroOneUsingFill(int arr[], int size)
{
    int zeroCount = 0, oneCount = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1) {
            oneCount++;
        }
    }
    std::fill(arr, arr+zeroCount, 0);
    std::fill(arr+ zeroCount, arr+size, 1);
}
void sortZeroOneUsingSort(int arr[], int size)
{
    std::sort(arr, arr+size);
}

int main(){

    int arr[7] = {0,1,1,0,1,0,0};
    int size = 7;

    sortZeroOne(arr, size);
    std::cout << "Sorted array is: ";

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    sortZeroOneUsingSort(arr, size);
    std::cout <<'\n' << "Sorted array is using sort is: ";

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    sortZeroOneUsingFill(arr, size);
    std::cout  <<'\n' << "Sorted array is using Fill is: ";

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}