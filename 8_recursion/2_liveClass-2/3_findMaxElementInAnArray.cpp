#include<iostream>
#include<climits>

int findMaxElement(int arr[], int size, int index, int &maxElem)
{

    if(index == size){
        return 0;
    }

    if(arr[index] > maxElem){
        maxElem = arr[index];
    }

    return findMaxElement(arr, size, index+1, maxElem);


}

int main()
{
    int arr[] = {10,20,30,40,50,55,60,80};
    int size = 8, index = 0, maxElem = INT_MIN;
    
    int ans = findMaxElement(arr, size, index, maxElem);

    std::cout << "Max element in the array is: " << ans;

    return 0;
}