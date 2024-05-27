#include<iostream>
#include<algorithm>

void reverseArrayMethod1(int arr[], int size)
{
    for(int i = size; i > 0; i--) {
        std::cout << arr[i - 1] << " ";
    }
    return;
}

void reverseArrayMethod2(int arr[], int size)
{
    //using two pointer appraoch
    int low = 0, high = size - 1;

    while(low < high){
        std::swap(arr[low], arr[high]);
        low++;
        high--;
    }
    //short way
    // while(low < high) 
    // std::swap(arr[low++], arr[high--]);
    
}

int reverseArraymethod3(int arr[], int size)
{
    //using STL
    std::reverse(arr, arr+size);
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;

    std::cout << "Reversed array using Method:1 is: " ;
    reverseArrayMethod1(arr, size);

    std::cout << '\n';

    int arr1[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size1 = 8;

    std::cout << "Swapped array using Method:2 is :";
    reverseArrayMethod2(arr1, size1);
    for(int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << '\n';

     
    int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size2 = 8;

    std::cout << "Swapped array using Method:3 is :";
    reverseArraymethod3(arr2, size2);
    for(int i = 0; i < size1; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << '\n';
     
    return 0;
}