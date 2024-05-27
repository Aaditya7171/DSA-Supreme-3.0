#include<iostream>

int main()
{
    int a, b, c;

    std::cout << "Enter three numbers to check the maximum one: ";

    std::cin >> a >> b >> c;

    if(a == b && a == c){
        std::cout << "Please enter distinct numbers";
    }
    else if(a >= b && a >= c){
        std::cout << "a = " << a << " is Greatest.";
    }
    else if(b >= c && b >= a){
        std::cout << "b = " << b << " is Greatest.";
    }
    else if(c >= a && c >= b){
        std::cout << "c = " << c << " is Greatest.";
    }
    return 0;
}