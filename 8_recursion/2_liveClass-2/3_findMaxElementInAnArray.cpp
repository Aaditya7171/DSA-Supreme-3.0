#include<iostream>
#include<climits>
#include<algorithm>

void findMaxElement(int arr[], int size, int index, int & maxElem)
{

    if(index == size){
        return;
    }

    maxElem = std::max(maxElem, arr[index]);

    findMaxElement(arr, size, index+1, maxElem); 
}

int main()
{
    int arr[] = {1000,20,30,40,990,55,60,80};
    int size = 8, index = 0, maxElem = INT_MIN;
    
    findMaxElement(arr, size, index, maxElem);

    std::cout << "Max element in the array is: " << maxElem;

    return 0;
}