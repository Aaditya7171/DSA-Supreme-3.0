#include<iostream>
#include<algorithm>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 40;

    bool ans = std::binary_search(arr, arr+n, target);//returns 1 if target present, else 0
    //binary_search(base address of array, address of last element, element to be found)

    std::cout << ans;
}