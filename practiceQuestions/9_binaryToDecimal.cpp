#include<iostream>
#include<cmath>

int main(){

    int binary;//Entered binary will be treated as decimal by compiler, and there is no way to store binary as binary
 
    std::cout << "Enter binary to convert it into decimal: ";

    std::cin >> binary;

    int ans = 0, i = 0;

    while(binary != 0){
        int lastBit = binary % 10;
        ans = ans + lastBit * pow(2, i);
        binary = binary / 10;
        i++;
    }

    std::cout << "Decimal of given binary is: " << ans;

    return 0;

}