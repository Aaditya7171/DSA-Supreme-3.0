#include<iostream>
#include<cmath>
int main() {

    int dec;

    std::cout << "Enter a decimal number to convert it into binary: ";
    
    std::cin >> dec;
    
    std::cout << "Binary of given number is: ";

    int ans = 0, i = 0;

    while(dec > 0){
        int digit = dec % 2;
        ans = digit * pow(10, i++) + ans;
        dec = dec / 2;
        }
    std::cout << ans;
    return 0;
}