#include<iostream>

bool findTarget(int arr[], int size, int target) 
{
    //traversing the entire array]
    // for(int i = size; i > 0; i--){}-->will also work well
    for(int i = 0; i < size; i++) {
        int currentElement = arr[i];
        if(currentElement == target) {
            return true; ///element found
        }
    }
    return false; //element not found
}

int main()
{
    int arr[100];

    int size;;

    std::cout << "Enter the number of elements: ";

    std::cin>> size;

    std::cout << "Enter elements: ";

    for(int i =0; i < size; i++) {
        std::cin>> arr[i];
    }

    int target;

    std::cout << "Enter target: ";

    std::cin >> target;

    bool ans = findTarget(arr, size, target);

    if(ans) {//if ans == true, then that block will be executed
        std::cout << "Element found.";
    }
    //ans == false-->
    else{
        std::cout << "Element not found.";
    }
    
    return 0;
}