#include<iostream>

int main(){
        
    int num;

    std::cout << "Enter a Decimal number: ";

    std::cin >> num;

    int base = 1;

    int ans = 0;

    while(num != 0){

        int bit  = num & 1;

        ans = bit * base + ans;
        
        num >>= 1;

        base = base * 10;

    }

    std :: cout << "Binary of given decimal number is: " << ans;

    return 0;
}