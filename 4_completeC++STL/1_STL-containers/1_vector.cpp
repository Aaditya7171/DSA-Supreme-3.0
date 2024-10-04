#include<iostream>
#include<vector>

int main() {
    std::vector<int> marks;
    std::vector<int> miles;
    std::vector<int> distance(15,0); // index 0 to 14 --> 0

    //method 1 : begin() --> returns an iterator pointing to the first element in the vector
    // std::cout << *marks.begin();

    //method 2 : end() --> returns an iterator pointing to the position just after the last element in the vector
    // std::cout << *marks.begin();

    //method 3 : push_back() --> add an element to the end of the vector
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    //method 4 : pop_back() --> removes the last element from the vector
    // marks.pop_back();

    //method 5 : size() --> returns the number of elements in the vector
    // std::cout << marks.size();

    //method 6 : front() --> accesses the first element in the array
    // std::cout << marks.front() << "\n";

    //method 7 : back() --> accesses the last element in the array
    // std::cout << marks.back() << "\n";
    
    //method 8 : empty() --> checks if the vector is empty
    // if(marks.empty() == true) std::cout << "Vector is empty." << "\n";
    // else std::cout << "Vector is not empty." << "\n";

    // if(miles.empty() == true) std::cout << "Vector is empty." << "\n";

    //method 9 : operator [] -->  Accesses the element at the specified index without bound checking
    // std::cout << marks[0] << "\n";

        //condition : targeted block should necessarily exist
        // std::cout << miles[0] = 10; // Error
 
    //method 10 : at() --> Accesses the element at the specified index with bounds checking
    // std::cout << marks.at(0) << "\n";  

    // //method 11 : capacity() --> returns the number of elements that the vector can hold before needing to allocate more space
    // std::cout << marks.capacity() << "\n";//4
    // marks.push_back(50);
    // std::cout << marks.capacity() << "\n";//8(vector doubled it's size)

    //method 12 : reserve() --> requests that the vector capacity be increased to atleast n elements, potentially reducing the number of reallocations
    // std::cout << miles.capacity() << "\n";
    // miles.reserve(10);
    // std::cout << miles.capacity() << "\n";

    //method 13 : max_size() --> returns the maximum number of elements that the vector can hold due to system or library limitations
    // std::cout << miles.max_size() << " \n";
    
    //method 14 : clear() --> removes all elements from the vector and leaves it with a size of 0
    // std::cout << marks.size() << "\n";
    // marks.clear();
    // std::cout << marks.size() << "\n";
   
    //method 15 : insert(interator position, const T&value) --> inserts the new elements before the specified poistion in the vector
    // marks.insert(marks.begin(), 50);
    // std::cout << marks[0] << "\n";

    //method 16 : erase(itetrator position) or erase(iterator first, iterator last) --> removes one or more element from the vector starting at the specified position
    // std::cout << marks.size() << " \n";
    // marks.erase(marks.begin(), marks.end());
    // std::cout << marks.size() << "\n";
    
    std::vector<int> first;
    std::vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    

    //for each loop(for each integer i, inside vector v)
    // for(int i : first){
    //     std::cout << i << " ";
    // }
    // std::cout << "\n";
    // for(int i : second){
    //     std::cout << i << " ";
    // }
    // std::cout << "\n";

    // //method 17 : swap() --> swaps the contents of the vector with those of another vector of same type, including their sizes and capacities
    // first.swap(second);

    // for(int i : first){
    //     std::cout << i << " ";
    // }
    // std::cout << "\n";
    // for(int i : second){
    //     std::cout << i << " ";
    // }

    //traversing the vector using iterator
    //step 1: create an iterator
    std::vector<int> :: iterator it = first.begin();
    
    //step 2: traverse the vector
    while(it != first.end()){
        std::cout << *it << " ";
        it++;
    }

    return 0;
}