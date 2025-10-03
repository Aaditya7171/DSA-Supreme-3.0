#include <iostream>
using namespace std;

// That auto indentation is awesome! :D
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

    void insert(int val)
    {
        // T.C. O(logn)
        if (index == capacity - 1)
        {
            cout << "Overflow!" << endl;
            return;
        }
        index++;
        arr[index] = val;
        // now place the value at right position in heap by comparing it with its parent node
        int currentIndex = index;
        while (currentIndex > 1)
        {
            int parentIndex = currentIndex / 2;
            if (arr[parentIndex] < arr[currentIndex])
            {
                swap(arr[parentIndex], arr[currentIndex]);
                currentIndex = parentIndex;
            }
            else
            {
                // parent is  greater than child so no need to do anything
                break;
            }
        }
    }

    void deleteFromHeap()
    {
        // T.C. O(logn)
        // underflow condition
        if (index == 0)
        {
            cout << "Underflow!" << endl;
            return;
        }
        // replace root element with last element
        swap(arr[1], arr[index]);
        // decrease size of array
        index--;
        // call heapify on root element
        heapify(arr, index, 1);
    }

    void heapify(int *arr, int n, int currIndex)
    {
        // n-> number of elements in heap
        int i = currIndex;
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        int largetValIndex = i;
        // assuming that current element is largest among all three
        // check for left
        if (leftIndex < n && arr[leftIndex] > arr[largetValIndex])
        {
            // got the larger value in left
            largetValIndex = leftIndex;
        }
        // check for right
        if (rightIndex < n && arr[rightIndex] > arr[largetValIndex])
        {
            largetValIndex = rightIndex;
        }
        // here we have the index of largest value among these three
        // if largest value is "i" then no need to do anything
        // if left or right has larger value then swap and call heapify again
        if (largetValIndex != i)
        {
            swap(arr[i], arr[largetValIndex]);
            i = largetValIndex;
            heapify(arr, n, i);
        }
    }
};

int main()
{
    Heap priorityQueue(7);
    priorityQueue.insert(10);
    priorityQueue.insert(6);
    priorityQueue.insert(7);
    priorityQueue.insert(2);
    priorityQueue.insert(3);
    priorityQueue.insert(5);
    priorityQueue.printHeap();
    priorityQueue.deleteFromHeap();
    priorityQueue.printHeap();
    priorityQueue.deleteFromHeap();
    priorityQueue.printHeap();
    priorityQueue.deleteFromHeap();
    priorityQueue.deleteFromHeap();
    priorityQueue.deleteFromHeap();
    priorityQueue.deleteFromHeap();
    priorityQueue.printHeap();
    priorityQueue.deleteFromHeap();

    return 0;
}