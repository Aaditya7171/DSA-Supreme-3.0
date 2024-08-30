#include<iostream>

bool searchArr(int arr[], int size, int index, int target) {

    // 2 base cases(not found, found)       
    if(index == size) {
        return false;
    }

    if(arr[index] == target) {
        return true;
    } 

    bool ans = searchArr(arr, size, index+1, target);

    return ans;
}

int main()
{
    int arr[] = {10,20,30,40,50,60};

    int size = 6, index = 0, target = 500;

    std::cout << searchArr(arr, size, index, target);

    return 0;
}