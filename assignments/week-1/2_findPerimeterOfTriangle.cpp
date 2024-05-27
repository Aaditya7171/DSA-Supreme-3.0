#include<iostream>

int main(){
    
    int side1, side2, side3;

    std::cout << "Enter sides of triangle(in cm): ";
    std::cin >> side1 >> side2 >> side3;
    int perimeter = (side1 + side2 + side3);
    std::cout << "Perimeter of given triangle is: " << perimeter << " cm."; 

    return 0;
}