
#include<iostream>
#include<cmath>

int binToDecMethod1(int binary)
{
    int ans = 0, i = 1;
    while(binary != 0){
        int lastBit = binary & 1;
        ans = ans + lastBit * i;
        binary = binary >> 1;
        i = i * 2;
    }
    return ans;
}
int main(){

    int binary;
 
    std::cout << "Enter binary to convert it into decimal: ";

    std::cin >> binary;

    int ans = binToDecMethod1(binary);
   
    std::cout << "Decimal of given binary is: " << ans;

    return 0;

}