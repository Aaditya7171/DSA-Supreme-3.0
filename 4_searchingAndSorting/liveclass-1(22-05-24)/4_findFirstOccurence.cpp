//technique--> store and compute

#include<iostream>
#include<algorithm>

void findFirstOccurence(int arr[], int n, int target, int &ansIndex)
{
    //we are using "ansIndex" as refernce so direct changes are made to that variable through this function and so no need to return anythinng
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

int main() {
    int arr[] = {10, 15, 20, 20, 20, 20, 30, 40, 50, 60};
    int n = 11;
    int target = 20;
    int ansIndex = -1;//target not found

    findFirstOccurence(arr, n, target, ansIndex);

    std::cout << "First occurence index: " << ansIndex;
}