#include<iostream>
#include<algorithm>
#include<vector>


int main() {

    std::vector<int> arr1 = {1,2,3,4,5};
    std::vector<int> arr2 = {4,5,6,7,8};
    std::vector<int> resUnion;
    std::vector<int> resIntersection;
    std::vector<int> setDifference;
    std::vector<int> setSymmetricDifference;

    //set doesn't stores duplicate elements

    //std::set_union : computes the union of two sorted ranges
    std::set_union(arr1.begin(), arr1.end(), arr2.begin(),arr2.end(), std::inserter(resUnion, resUnion.begin()));
    std::cout << "Union of arr1 and arr2 is: ";
    for(int a : resUnion){
        std::cout << a << " ";
    }

    //std::set_intersection : computes the intersection of two sorted ranges
    std::set_intersection(arr1.begin(), arr1.end(), arr2.begin(),arr2.end(), std::inserter(resIntersection, resIntersection.begin()));
    std::cout << "\n" << "Intersection of arr1 and arr2 is: ";
    for(int a : resIntersection){
        std::cout << a << " ";
    }

    //std::set_difference : computes the difference between two sorted ranges
    std::set_difference(arr1.begin(), arr1.end(), arr2.begin(),arr2.end(), std::inserter(setDifference, setDifference.begin()));
    std::cout << "\n" << "Difference of arr1 and arr2 is: ";
    for(int a : setDifference){
        std::cout << a << " ";
    }

    //std::set_symmetric_difference : computes the symmetric difference of two sorted ranges
    std::set_symmetric_difference(arr1.begin(), arr1.end(), arr2.begin(),arr2.end(), std::inserter(setSymmetricDifference, setSymmetricDifference.begin()));
    std::cout << "\n" << "Symmetric difference of arr1 and arr2 is: ";
    for(int a : setSymmetricDifference){
        std::cout << a << " ";
    }

    return 0;
}