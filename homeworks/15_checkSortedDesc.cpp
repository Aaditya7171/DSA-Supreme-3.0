#include<iostream>

bool checkSortedDesc(int arr[], int size, int i) 
{
    if(i == size - 1) return true;

    bool currAns = false, recAns = false;
    if(arr[i + 1] < arr[i]) currAns = true;
    
    recAns = checkSortedDesc(arr, size, i+1);
    return (currAns && recAns);
}

int main()
{ 
    int arr[6] = {6,5,4,3,2,1};
    int size = 6;
    int index = 0;

    bool ans = checkSortedDesc(arr, size, index);

    std::cout << (ans ? "Array is Sorted in Descending order." : "Array is not Sorted in descending order.") << "\n";
}