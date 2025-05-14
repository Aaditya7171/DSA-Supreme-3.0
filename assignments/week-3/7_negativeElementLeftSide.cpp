#include <iostream>
#include <vector>
#include <algorithm>

void negShiftNaive(std::vector<int> &arr, int size)
{
    std::sort(arr.begin(), arr.end());
}

void dutchNationalFlag(std::vector<int> &arr, int size)
{
    int l = 0, h = arr.size() - 1;
    while (l < h)
    {
        if (arr[l] < 0)
            l++;
        else if (arr[h] > 0)
            h--;
        else
            std::swap(arr[l], arr[h]);
    }
}

int main()
{
    std::vector<int> arr = {1, -5, 7, -9, 8, -5};
    int size = 6;

    dutchNationalFlag(arr, size);

    for (int i : arr)
    {
        std::cout << i << " ";
    }
    return 0;
}