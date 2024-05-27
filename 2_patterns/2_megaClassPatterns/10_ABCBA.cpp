#include<iostream>

void printABCBA(int n)
{
    for(int row = 0; row < n; row ++){
        char ch = 'A'; //ASCII 65 
        for(int col = 0; col < row + 1; col++){
            std::cout << ch;
            ch++;//65 and then ++ for each iteration of col
        }
        ch--;//D-->C
        while (ch > 'A'){
            ch--;//C-->B
            std::cout << ch;
        }
        std::cout << '\n';
    }

}

int main()
{
    int n;

    std::cout << "Enter n: ";

    std::cin>> n;

    printABCBA(n);

    return 0;
}