#include<iostream>

void printNumericHollowHalfPyramid(int n)
{
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row+1; col++){
            if(col == 0 || row == col || row == n-1){
                std::cout << col+1 << " ";
            }
            else{
                std::cout << "  ";
            }
            
        }
        std::cout << '\n';
    }

}

int main()
{
    int n;

    std::cout << "Enter height of the half pyramid: ";

    std::cin >> n;

    printNumericHollowHalfPyramid(n);

    return 0;
}