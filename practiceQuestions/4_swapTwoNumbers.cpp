#include<iostream>

int main(){
    
    int a, b;

    std::cout << "Enter value of a : ";
    std::cin >> a;

    std::cout << "Enter value of b : ";
    std:: cin >> b;

    int temp;
    temp = a;
    a = b;
    b = temp;

    std::cout << "Value of a is : " << a << ", and value of b is : " << b << ". \n";

    
    return 0;
}