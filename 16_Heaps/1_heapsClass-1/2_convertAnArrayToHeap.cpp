#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int capacity;
    int index;

    Heap(int cap)
    {
        this->capacity = cap;
        arr = new int[capacity];
        index = 0;
    }

    void printHeap()
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int *arr, int n, int currIndex)
{
    int i = currIndex;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;
    int largetValIndex = i;
    if (leftIndex < n && arr[leftIndex] > arr[largetValIndex])
    {
        largetValIndex = leftIndex;
    }
    if (rightIndex < n && arr[rightIndex] > arr[largetValIndex])
    {
        largetValIndex = rightIndex;
    }
    if (largetValIndex != i)
    {
        swap(arr[i], arr[largetValIndex]);
        i = largetValIndex;
        heapify(arr, n, i);
    }
}

void buildHeap(int *arr, int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{
    int arr[] = {-1, 10, 20, 30, 40, 50};
    int n = 6;
    buildHeap(arr, n);
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}