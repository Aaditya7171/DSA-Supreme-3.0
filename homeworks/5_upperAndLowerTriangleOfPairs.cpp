#include<iostream>

void printAllPairs(int arr[], int size)
{
    std::cout << "All pairs: " << '\n';
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cout << arr[j] << "," << arr[i] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n'  << "Upper triangle of pairs: " << '\n';
    for(int i = 0; i < size; i++) {
        for(int j = 0; j <= i; j++) {
            std::cout << arr[j] << "," << arr[i] << " ";
        }
        std::cout << '\n';
    }

    std::cout << '\n' << "Lower triangle of pairs: "<< '\n';
    for(int i = 0; i < size; i++) {
        for(int space = 0; space < i ; space++){
            std::cout << "      ";
        }
        for(int j = i; j < size; j++) {
            std::cout << arr[j] << "," << arr[i] << " ";
        }
        std::cout << '\n';
    }
}

int main(){

    int arr[4] = {10,20,30,40};
    int size = 4;

    printAllPairs(arr, size);

    return 0;
}