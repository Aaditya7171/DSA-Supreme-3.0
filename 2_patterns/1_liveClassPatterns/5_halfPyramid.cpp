#include<iostream>

int main(){

    int n;
    std::cout << "Enter side: ";
    std::cin>> n;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row+1; col++){
            std::cout << "* ";
        }
    std::cout << '\n';
    }
    return 0;
}