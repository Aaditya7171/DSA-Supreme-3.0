#include <iostream>

void rotateArray(int arr[], int size, int shift)
{
    int finalShift = shift % size;
    if (finalShift == 0)
    {
        return; // no need to do anything
    }
    // step 1: copy last n elements in temp array
    int temp[1000], index = 0;
    for (int i = size - finalShift; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    // step2 : shift array elements by finalShift places
    for (int i = size - 1; i >= 0; i--)
    {
        if ((i - finalShift) >= 0)
        {
            arr[i] = arr[i - finalShift];
        }
        //  arr[i] = arr[i - finalShift];
    }
    // step 3 : copy temp elements in original array
    for (int i = 0; i < finalShift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int shift = 2;

    std::cout << "Before shifting: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    rotateArray(arr, size, shift);

    std::cout << '\n'
              << "After shifting: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}