#include<iostream>

void printNumericHollowInvertedHalfPyramid(int n)
{
int count = 2;
    for(int row = 0; row < n; row++){
        
        for(int col = 0; col < n; col++){
            
            if(col == 0){
                std::cout << row+1 << " ";
            }
            else if(row == 0 && col < n){
                std::cout << count++ << " ";
            }
            else if(row == n - col - 1){
                std::cout << n << " ";
            }
            else{
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }

}
void printNumericHollowInvertedHalfPyramidAp2 (int n)
{

    for(int row = 0; row < n; row++){
        
        for(int col = row+1; col <= n; col++){
            if(col == row+1 || row == 0 || col == n){
            std::cout <<  col << " ";
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

    // printNumericHollowInvertedHalfPyramid(n);
    printNumericHollowInvertedHalfPyramidAp2(n);

    return 0;
}