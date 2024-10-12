#include<algorithm>
#include<iostream>


class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int start, int end)
    {
        if(start >= end) return;
        int pivot = end;
        int i = start - 1;
        int j = start;
        
        while(j < pivot){
            if(arr[j] < arr[pivot]){
                i++;
                std::swap(arr[i], arr[j]);
            }
            j++;
        }
        i++;//i  is the right position of pivot element
        std::swap(arr[i], arr[pivot]);
        quickSort(arr, start, i - 1);
        quickSort(arr, i + 1, end);
    }
    
    public:
    int partition (int arr[], int start, int end)
    {
       //won't use it
    }
};

int main() {

    int arr[8] = {7,2,1,8,6,3,5,4};
    int start = 0, end = 7;
    Solution sol;
    sol.quickSort(arr, start, end);

    for(int i : arr){
        std::cout << i << " ";
    }

    return 0;
}