#include<iostream>
#include<climits>
#include<algorithm>

void findMinElement(int arr[], int size, int index, int &minElem)
{

    if(index == size){
        return;
    }

    minElem = std::min(minElem, arr[index]);

    findMinElement(arr, size, index+1, minElem); 
}

int main()
{
    int arr[] = {1000,20,30,40,990,55,60,80};
    int size = 8, index = 0, minElem = INT_MAX;
    
    findMinElement(arr, size, index, minElem);

    std::cout << "Minimum element in the array is: " << minElem;

    return 0;
}