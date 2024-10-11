#include<iostream>
#include<algorithm>
#include<vector>

class comparator{
    public:
    bool operator()(int a, int b){
        return a > b;  
    }
};

int main(){
    
    std::vector<int> arr = {11,25,66,43,22};

    std::sort(arr.begin(), arr.end());//sorts the arr in ascending order
    
    std::cout << "Sorted arr in asc order: ";
    for(int a : arr){
        std::cout << a << " ";
    }

    //what if we want to sort in descending order(we use custom comparator)
    std::vector<int> arr2 = {12,35,23,13,5,15};
    std::sort(arr2.begin(), arr2.end(), comparator());//sorts the arr in ascending order
    std::cout << "\n" << "Sorted arr2 in desc order: ";
    for(int a : arr2){
        std::cout << a << " ";
    }

    return 0;
}