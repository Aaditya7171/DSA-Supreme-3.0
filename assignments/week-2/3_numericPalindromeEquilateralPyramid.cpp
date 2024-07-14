#include<iostream>

void printNumericPalindromeEquilateralPyramid(int n)
{
    for(int row = 0; row < n; row++){
        for(int space = 0; space <= n-row; space++){
            std::cout << "  ";
        }
        for(int col = 0; col <= row; col++){
            std::cout << col+1 << " ";
        }
        for(int col = row; col >0 ; col--){
            std::cout << col << " ";
        }
        std::cout << '\n';
    }

}
void printNumericPalindromeEquilateralPyramidAp2(int n)
{
    int k = n;
    for(int row = 0; row < n; row++){
        int c = 1;
        for(int col = 0; col < k; col++){
            if(col<n-row-1){
                std::cout << "  ";
            }
            else if(col < n){
                std::cout << c++ << " ";
            }
            else if(col == n){
                c = c - 2;
                std::cout << c-- << " ";
            }
            else{
                std::cout << c-- << " ";
            }
        }
        k++;
        std::cout << '\n';
    }
}


int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    // printNumericPalindromeEquilateralPyramid(n);
    printNumericPalindromeEquilateralPyramidAp2(n);

    return 0;
}