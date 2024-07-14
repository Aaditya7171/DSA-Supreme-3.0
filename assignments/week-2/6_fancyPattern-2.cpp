// pattern for n = 4-->
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

#include<iostream>

void printFancyPattern2(int n)
{
    int count = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*row+1; col++){
            if(col % 2 == 0){
                std::cout << count++ ;
            }
            if(col % 2 != 0){
                std::cout << "*";
            }  
        }
        std::cout << '\n';
    }
    for(int row = 0; row < n; row++){
        count = 2*n-2*row-1;
        if(row!=0 && row != n-1) count--;
        for(int col = 0; col < 2*n-2*row-1; col++){
            if(col % 2 == 0){
                std::cout << count++ ;
            }
            if(col % 2 != 0){
                std::cout << "*";
            } 
        }
        std::cout << '\n';
        
    }
}

void printFancyPattern2Ap2(int n)
{
    
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    printFancyPattern2(n);

    // printFancyPattern2Ap2(n);

    return 0;
}

