// pattern for n = 5-->
// *
// * 1 *
// * 1 2 1 *
// * 1 2 3 2 1 *
// * 1 2 1 *
// * 1 *
// *


#include<iostream>

void printFancyPattern3(int n)
{   
    std::cout << "* " << '\n';
    for(int i = 0; i < n; i++){
        int cond = i <= n/2 ? 2*i : 2*(n - i - 1);
        std::cout << "* ";
        for(int j = 0; j <= cond; j++){
            if(j <= cond/2){
                std::cout << j + 1 << " ";
            }
            else{
                std::cout << cond - j + 1 << " ";
            }
        }
        std::cout << "* " << '\n';
    }
    std::cout << "* ";
}

int main()
{
    int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;

    printFancyPattern3(5);

    // printFancyPattern3Ap2(n);

    return 0;
}

