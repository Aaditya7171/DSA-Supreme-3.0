#include<iostream>

int main(){
    // pair<datatype1, datatype2> name;

    // std::pair<int, char> A;//garbage value
    
    // std::pair<int, char> A{1, 'a'};//initialization method 1

    // std::pair<int, char> A = {2, 'c'};//initialization method 2
    
    std::pair<int, char> A = std::make_pair(4, 't');//initialization method 2
    
    std::cout << A.first << " " << A.second;//accessing

    return 0;
}