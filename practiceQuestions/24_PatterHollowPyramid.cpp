//Pattern: Hollow-pyramid (day-8 : problem-3)
#include<iostream>

void printPyramid(int n)
{
    for(int row = 0; row < n; row++){
        for(int space = 0; space  < n - row - 1; space++){
                std::cout << " ";
            }
        for(int col = 0; col <= 2 * row; col++) {
            if(col == 0 || row == n-1 || col == 2 * row){
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
}

int main() 
{
    int n;
    std::cout << "Enter height of pyramid: ";
    std::cin >> n;
    printPyramid(n);
    return 0;
}

