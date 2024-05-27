//Pattern- pyramid (day-8 : problem-1)
#include<iostream>

void printPyramid(int n)
{
    for(int row = 0; row < n; row++){
        for(int space = 0; space  <= n - row - 1; space++){
                std::cout << " ";
            }
        for(int col = 0; col <= row; col++) {
            std::cout << "* ";
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