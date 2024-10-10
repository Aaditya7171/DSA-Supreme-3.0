#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    
    int a = 10, b = 20;

    std::vector<int> arr = {1,2,3,4,5,7};

    //max() : returns larger of two elements
    std::cout << "Max element is: " << std::max(a,b) << "\n";

    //min() : returns smaller of two elements
    std::cout << "Min element is :" << std::min(a,b) << "\n";
 
    //min_element : finds the smallest element in a range and returns an iterator pointing to the smallest element
    auto it = std::min_element(arr.begin(), arr.end());
    std::cout << "Smallet element in arr is: " << *it << "\n";

    //max_element : finds the largest element in a range and returns an iterator pointing to the largest element
    auto it2 = std::max_element(arr.begin(), arr.end());
    std::cout << "Largest element in arr is: " << *it2 << "\n";


    return 0;
}