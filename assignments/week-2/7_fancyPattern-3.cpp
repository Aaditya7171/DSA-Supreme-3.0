// pattern for n = 3-->


#include<iostream>

void printFancyPattern3(int n)
{
    int count = 1;
    for(int row = 0; row < 2 * n - 1; row++){
        int count = 1;
        for(int col = 0; col < 2 * row + 1; col++){
            if(col % 2 == 0 || col == 0){
                std::cout << "* " ;
            }
        }
        std::cout << '\n';
    }
}

void printFancyPattern3Ap2(int n)
{
    
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    printFancyPattern3(n);

    // printFancyPattern3Ap2(n);

    return 0;
}

