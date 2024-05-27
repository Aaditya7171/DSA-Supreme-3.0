//technique--> store and compute

#include<iostream>
#include<algorithm>

void findFirstOccurence(int arr[], int n, int target, int &ansIndex)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while(start <= end){
        if(target == arr[mid]){
            ansIndex = mid;
            end = mid - 1;
        }
        if(target > arr[mid]){
            start = mid + 1;
        }
        if(target < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}

void findLastOccurence(int arr[], int n, int target, int &ansIndex)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while(start <= end){
        if(arr[mid] == target){
            ansIndex = mid;
            start = mid + 1;
        }
        if(target > arr[mid]){
            start = mid + 1;
        }
        if(target < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}

int main() {
    int arr[] = {10,20,20,20,30};
    int n = 5;
    int target = 20;
    int firstIndex = -1;
    int lastIndex = -1;

    findFirstOccurence(arr, n, target, firstIndex);
    findLastOccurence(arr, n, target, lastIndex);

    std::cout << "Total occurences: " << (lastIndex - firstIndex + 1);
}