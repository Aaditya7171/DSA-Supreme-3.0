// Pattern - Diamond (day-9 : problem-1)
#include<iostream>
void printDiamondPattern(int n) {
    for(int row = 0; row < n; row++){
        for(int space = 0; space <= n - row; space++){
            std::cout << " ";
        }
        for(int col = 0; col <= row * 2; col++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    for(int row = 0; row <= n; row++){
        for(int space = 0; space <= row; space++){
            std::cout << " ";
        }
        for(int col = 0; col <= 2*(n - row); col++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}
int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    printDiamondPattern(n);
    return 0;
}