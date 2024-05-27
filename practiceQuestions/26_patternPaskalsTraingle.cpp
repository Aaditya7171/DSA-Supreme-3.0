//Pattern : Paskal's Triangle (day-9 : problem-2)
#include<iostream>

void printPaskalsTriangle(int n)
{
    for(int row = 0; row < n; row++) {
        int num = 1;

        for(int space = 0; space <= n - row - 1; space++){
        std::cout << " ";
        }

        for(int col = 0; col <= row; col++){
            std::cout << num << " ";
            num = num * (row - col) / (col + 1);//"*" have higher precedence than "/"
        }
        std::cout << '\n';
    }
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    printPaskalsTriangle(n);
    return 0;
}