#include<iostream>

int findUniqueNumber(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int arr[5] = {2,3,1,3,1};
    int size = 5;

    int ans = findUniqueNumber(arr, size);
    std::cout << "Unique number is: " << ans;

    return 0;
}