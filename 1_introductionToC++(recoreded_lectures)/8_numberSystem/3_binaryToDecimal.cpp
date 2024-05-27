
#include<iostream>
#include<cmath>

int binToDecMethod1(int binary)
{
    int ans = 0, i = 0;
    while(binary != 0){
        int lastBit = binary % 10;
        ans = ans + lastBit * pow(2, i++);
        binary = binary / 10;
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