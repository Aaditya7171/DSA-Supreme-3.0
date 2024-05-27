#include<iostream>

void printFancy12(int n)
{
    for(int row= 0; row < n; row++) {
        for(int col = 0; col < (2 * row) + 1; col++){
            if(col % 2 == 0) {
                std::cout << row + 1;
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << '\n';
    }
   
}

int main()
{
    int n;

    std::cout << "Enter n: ";

    std::cin >> n;

    printFancy12(n);

    return 0;
}