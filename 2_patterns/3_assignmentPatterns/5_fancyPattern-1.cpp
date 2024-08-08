// pattern for n = 5-->
// ********1**********
// *******2*2*********
// ******3*3*3********
// *****4*4*4*4*******
// ****5*5*5*5*5******

#include<iostream>

void printFancyPattern1(int n)
{
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*n-1; col++){
            if(col < 2*n-row-2){
                std::cout << "*";
            }
            else{
                std::cout << row+1 << "*";
            }   
        }
        for(int col = 0; col < 2*n-row-1; col++){
            std::cout << "*";
        }
        std::cout << '\n';
    }
}

void printFancyPattern1Ap2(int n)
{
    
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    printFancyPattern1(n);

    // printFancyPattern1Ap2(n);

    return 0;
}

