#include<iostream>

int main(){
    int n;

    std::cout << "Enter n to print counting from n to 1: ";
    std::cin >> n;

    std::cout << "Counting from " << n << " to 1 is: ";
    for(int i = n; i > 0; i--){
        std::cout << i << " ";
    }
    return 0;
}