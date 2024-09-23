#include<iostream>

int iterativeBinarySearch(int arr[], int size, int target) 
{
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = (s + e) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int recursiveBinarySearch(int arr[], int target, int s, int e) 
{
    if(s > e) return -1;

    int mid = (s+e) / 2;

    if(arr[mid] == target) return mid;

    if(arr[mid] < target) {
        s = mid + 1;
        return recursiveBinarySearch(arr, target, s, e);
    }
    else {
        e = mid - 1;
        recursiveBinarySearch(arr, target, s, e);
    }
}

int main() 
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;

    // int ans = iterativeBinarySearch(arr, size, 10);

    int ans = recursiveBinarySearch(arr, 5, 0, size - 1);

    std::cout << "element found at " << ans;

    return 0;

}