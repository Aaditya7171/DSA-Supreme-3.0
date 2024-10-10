#include<iostream>
#include<algorithm>
#include<vector>

int main() {

    std::vector<int> arr = {12,45,32,55,39};

    //std::make_heap : converts a range into a max-heap(t.c : O(n))
    std::make_heap(arr.begin(), arr.end());
    std::cout << "Max heap: ";
    for(int a : arr){
        std::cout << a << " ";
    }
    //to make a min heap, we can use a custom comparator
    std::make_heap(arr.begin(), arr.end(), std::greater<int>());
    std::cout << "\n" << "Min heap: ";
    for(int a : arr){
        std::cout << a << " ";
    }

    //std::push_heap : inserts an element into a max-heap(O(log n)
    //when we directly push the elements using push_back then the property gets violated
    arr.push_back(99);
    //but after applying that function, heap property remains unvioalted
    std::push_heap(arr.begin(), arr.end());
    std::cout << "\n" << "Heap after inserting new element: ";
    for(int a : arr){
        std::cout << a << " ";
    }

    //std::pop_heap : removes the largest element from a max-heap(O(1))
    std::pop_heap(arr.begin(), arr.end());
    std::cout << "\n" << "Heap after applying pop_heap: ";
    for(int a : arr){
        std::cout << a << " ";
    }
    //after popping out, the maximum element goes to last position, so we have to remove it as well
    arr.pop_back();
    std::cout << "\n" << "Heap after deleting an element: ";
    for(int a : arr){
        std::cout << a << " ";
    }

    //std::sort_heap : sorts a range that represents a max-heap(O(n))
    std::sort_heap(arr.begin(), arr.end());
    std::cout << "\n" << "Sorted Heap: ";
    for(int a : arr){
        std::cout << a << " ";
    }    

    return 0;
}