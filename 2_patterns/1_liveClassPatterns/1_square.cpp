#include<iostream>

int main() {

    int side;
    std::cout << "Enter side: ";
    std::cin >> side;
    //outer loop (4 rows)
    for(int row = 0; row < side; row++){
        //inner loop (4 columns)
        for(int col = 0; col < side; col++) {
            std::cout << "*" << " ";
        }
        //after printing 4 stars
        std::cout << '\n';
    }
}