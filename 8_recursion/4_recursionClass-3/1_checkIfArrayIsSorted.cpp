#include<iostream>

bool checkSorted(int arr[], int size, int i) 
{
    if(i == size - 1) return true;

    bool currAns = false, recAns = false;
    if(arr[i + 1] > arr[i]) currAns = true;
    
    recAns = checkSorted(arr, size, i+1);
    return (currAns && recAns);
}

int main()
{ 
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    int index = 0;

    bool ans = checkSorted(arr, size, index);

    std::cout << (ans ? "Array is Sorted." : "Array is not Sorted.") << "\n";

    return 0;
}