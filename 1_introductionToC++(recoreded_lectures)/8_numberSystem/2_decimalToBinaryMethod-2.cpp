//Bitwise method
#include<iostream>
#include<cmath>

int decToBinBitwiseMethod(int n)
{
    int ans = 0, i = 0;
    while(n > 0) {
        int digit = n & 1;
        ans = digit * pow(10, i++) + ans;
        n = n >> 1;
    }
    return ans;
}

int main() {

    int dec;

    std::cout << "Enter a decimal number to convert it into binary: ";
    
    std::cin >> dec;
    
    std::cout << "Binary of given number is: ";

    int result = decToBinBitwiseMethod(dec);

    std::cout << result;

    return 0;
}