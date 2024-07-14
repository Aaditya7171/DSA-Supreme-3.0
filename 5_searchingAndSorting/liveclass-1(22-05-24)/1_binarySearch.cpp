//binary search
#include<iostream>

int binarySearch(int nums[], int size, int target)
{
    int start = 0, end = size - 1;
     

    while(start <= end){
        int mid = start + (end - start)/ 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] > target){
            end = mid - 1;
        }
        if(nums[mid] < target){
            start = mid + 1;
        }
    }
    return -1;
}


int main()
{
    int arr[] ={1,2,3,4,5,43};
    int size = 6;
    int target = 43;

    int targetIndex = binarySearch(arr, size, target);

    std::cout << targetIndex;

    return 0;
}