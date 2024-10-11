#include<iostream>
#include<vector>
#include<string>
#include<forward_list>
#include<list>

int main() {

    std::vector<std::string> lang = {"C++", "Java", "Javascript", "Python", "R", "Rust"};
    
    //creating iterator
    std::vector<std::string> :: iterator it = lang.begin();

    //traversing the vector through iterator
    while(it != lang.end()){
        std::cout << *it << ", ";
        it++;
    } std::cout << "\n";


    //forward iterator : read/write, forward moving
    //creating forward list(based on singly linked list)
    std::forward_list<int> nums = {1,2,3,4,5,6};
    //creating an iterator that points to the beginning of the nums
    std::forward_list<int> :: iterator itr = nums.begin();
    //traversing the forward list
    while(itr != nums.end()){
        (*itr) = (*itr) + 10 ;//write
        std::cout << *itr << " ";//read
        itr++;
    } std::cout << "\n";
    // //trying to move backwards(error)
    // std::forward_list<int> :: iterator itr2 = nums.end();
    // while(itr2 != nums.begin()){
    //     std::cout << *itr << " ";
    //     itr2--;
    // }

    
    //bi-directional iterator : read/write, forward/backward
    std::list<int> lst = {10,20,30,40,50};
    std::list<int> :: iterator itr3 = lst.begin();

    while(itr3 != lst.end()){
        (*itr3) = (*itr3) * 2;//write
        std::cout << *itr3 << " ";//read
        itr3++;//forward move
    } std::cout << "\n";
    //moving backwards
    std::list<int> lst2 = {10,20,30,40,50};
    std::list<int> :: iterator itBack = lst2.end();
    while(itBack != lst2.begin()){
        itBack--;//when we are at "lst2.end()" then there is no data stored in that block so we'll move it backward firstly(DLL)
        std::cout << *itBack << " ";
    } std::cout << "\n";


    //Random access operator : read/write, forward/backward, random access
    std::vector<int> arr = {5,10,15,20,25};
    std::vector<int> :: iterator vIt = arr.begin();
    while(vIt != arr.end()){
        *vIt = *vIt / 5;//write
        std::cout << *vIt << " ";//read
        vIt++;//forward move
    } std::cout << "\n";
    //backward movement
    std::vector<int> :: iterator vItBack = arr.end() - 1;//since arr.end() points to the ending location of last block of arr but there is no value stored in that block(seg fault)
    while(vItBack != arr.begin() - 1){
        std::cout << *vItBack << " ";
        vItBack--;//backward move
    } std::cout << "\n";
    //backward movement(method 2)
    std::vector<int> :: iterator vItBack2 = arr.end();
    while(vItBack2 != arr.begin()){
        vItBack2--;//backward move(moving backward firstly to avoid segmentation fault)
        std::cout << *vItBack2 << " ";
    } std::cout << "\n";
    //random access
    std::vector<int> :: iterator rIt = arr.begin() + 3; 
    std::cout << *rIt  << " \n";


    return 0;
}