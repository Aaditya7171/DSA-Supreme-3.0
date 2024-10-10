#include<iostream>
#include<algorithm>
#include<vector>

void printDouble(int a){
    std::cout << 2 * a << " ";
}

bool checkEven(int a){
    return (!(a & 1));
}

int main() {

    std::vector<int> arr(6);
    arr[0] = 20;
    arr[1] = 64;
    arr[2] = 30;
    arr[3] = 41;
    arr[4] = 29;
    arr[5] = 65;

    //for each : applies a function to each element in a range
    std::for_each(arr.begin(), arr.end(), printDouble);


    //find : searches for a specific element in a range and returns an iterator(if target found then we get a valid operator, 0 or garbage value otherwise)
    // vector<int>::iterator it = find(arr.begin(), arr.end(), 40);
    //"auto" detects automatically that which iterator should be used
    auto it = std::find(arr.begin(), arr.end(), 60);
    std::cout << "\n" << *it << "\n";

    //find_if : searches for the first element that satifies a given predicate and returns an iterator
    auto it2 = std::find_if(arr.begin(), arr.end(), checkEven);
    std::cout << *it2 << "\n";

    //count : counts the occurences of a value in a range
    int c = std::count(arr.begin(), arr.end(), 30);
    std::cout << "Number of occurences of target: " << c << "\n";

    //count_if : counts the element that satisfy a given predicate
    int c2 = std::count_if(arr.begin(), arr.end(), checkEven);
    std::cout << "Number of Occurences of target that satisfies the given predicate: " << c2 << "\n";

    //sort : sorts the elements in a range in ascending order
    std::cout << "Sorted Array: ";
    std::sort(arr.begin(), arr.end());
    for(int a : arr){
        std::cout << a << " ";
    } 

    //reverse : reverses the order of elements in a range
    std::cout << "\n" << "Reversed Array: ";
    std::reverse(arr.begin(), arr.end());
    for(int a : arr){
        std::cout << a << " ";
    } 

    //rotate : rotates elements in a range
    std::cout << "\n" << "Left Rotated Array: ";
    std::rotate(arr.begin(), arr.begin() + 3, arr.end());
    for(int a : arr){
        std::cout << a << " ";
    }
    //CW : right rotate
    std::cout << "\n" << "Right Rotated Array: ";
    std::rotate(arr.begin(), arr.begin() + (arr.size() - 3), arr.end());
    for(int a : arr){
        std::cout << a << " ";
    }

    //unique : removes duplicate elements from a sorted range
    auto it3 = unique(arr.begin(), arr.end());
    //here, all the elements are unique before it, and all the elements are duplicate after it
    //so we'll have to erase the duplicate elements
    arr.erase(it3, arr.end());
    std::cout << "\n" << "Array with Unique elements: ";
    for(int a : arr){
        std::cout << a << " ";
    }

    //partition : divides elements in a range into two groups based on a predicate
    //returns an iterator,there will be all the even elements before the iterator and odd elements after the iterator 
    std::cout << "\n" << "Partioned Array: ";
    auto it4 = partition(arr.begin(), arr.end(), checkEven);
    for(int a : arr){
        std::cout << a << " ";
    }

    return 0;
}