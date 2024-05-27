#include<iostream>

void printFullFancy12(int n)
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
    n--;//for inverted, n = n - 1
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < 2 * (n-row) - 1; col++){
            if(col % 2 == 0) {
                std::cout << n - row;
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

    printFullFancy12(n);

    return 0;
}