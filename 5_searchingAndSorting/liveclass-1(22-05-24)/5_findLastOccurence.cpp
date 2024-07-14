//technique--> store and compute

#include<iostream>
#include<algorithm>

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
    int arr[] = {20, 20, 20, 20, 20, 20, 30, 40, 50, 60};
    int n = 11;
    int target = 20;
    int ansIndex = -1;//target not found

    findLastOccurence(arr, n, target, ansIndex);

    std::cout << "Last occurence index: " << ansIndex;
}