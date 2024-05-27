#include<iostream>

int main() 
{
    int a,b,c;

    std::cout << "Enter three sides of triangle: ";
    std::cin >> a >> b >> c;

    if((a+b) > c && (b+c) > a && (a+c) > b){
        std::cout << "Your sides can for a valid triangle.";
    }
    else {
        std::cout << "Valid triangle can't be formed from those sides.";
    }
}