#include<iostream>
#include<algorithm>
#include<vector>

int main(){

    std::vector<int> arr = {1,3,6,20,13,34,52,23};
    sort(arr.begin(), arr.end());

    //binary_search : checks if a value exists in a sorted range
    //binary_search(start, end, target) : returns bool->true(1) if element found, false(0) otherwise
    bool ans = std::binary_search(arr.begin(), arr.end(), 23);
    ans ? std::cout << "Element found." << "\n" : std::cout << "Element not found." << '\n'; 

    //lower_bound : finds the first element greater or equal to a value in a sorted range
    //lower_bound(start, end, target) : returns iterator pointing to the element that is greater or equal to the target
    auto it = std::lower_bound(arr.begin(), arr.end(), 34);
    std::cout << "Lower bound of the target is: " << *it << "\n";
   
    //upper_bound : finds the first element greater than a value in a sorted range
    //upper_bound(start, end, target) : returns iterator pointing to the element that is greater from the target
    auto it2 = std::upper_bound(arr.begin(), arr.end(), 34);
    std::cout << "Upper bound of the target is: " << *it2 << "\n";

    //time complexity of all of the above algorithms is O(logn)
    
    //equal_range : finds a range of elements equal to a value in a sorted range
    std::vector<int> vec = {1,3,5,5,5,7,8,9};
    auto res = std::equal_range(vec.begin(), vec.end(), 5);
    //distance : calculates the number of elements between two iterators in a container
    //distance(starting iterator, ending iterator)
    std::cout << "Elements equal to 5 are between indices: " << distance(vec.begin(), res.first) << " " << distance(vec.begin(), res.second);
    //res.first points to the first 5 at index 2.
    //res.second points to the position after the last 5, which is index 5.

    return 0;
}