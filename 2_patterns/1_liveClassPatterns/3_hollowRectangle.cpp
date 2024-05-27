#include<iostream>

int main() {
     
    int length, width;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
    //outer loop (4 rows)
    for(int row = 0; row < length; row++){
        //inner loop (5 columns)
        for(int col = 0; col < width; col++) {
            if(row == 0 || row == (length-1)){
                std::cout << "* ";
            }
            else {
                //middle rows
                if(col == 0 || col == (width - 1)){
                    std::cout << "* ";
                } else {
                    std::cout << "  ";
                }
            }
        }
        //after printing 5 stars
        std::cout << '\n';
    }
    return 0;
}