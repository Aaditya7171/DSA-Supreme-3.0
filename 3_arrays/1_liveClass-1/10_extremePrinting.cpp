#include <iostream>
#include <climits>

void extremePrint(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        std::cout << arr[left] << " ";
        left++;
        if (left <= right) // Check if left has not surpassed right
            std::cout << arr[right] << " ";
        right--;
    }
    return;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    extremePrint(arr, size);
    return 0;
}