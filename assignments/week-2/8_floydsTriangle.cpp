#include<iostream>

void printFloydsTriangle(int n) 
{
    int count = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
        std::cout << count << " ";
         count++;
        }
        std::cout<<'\n';
    }
}

int main()
{
    int n;

    std::cout << "Enter n: ";

    std::cin >> n;

    printFloydsTriangle(n);

    return 0;
}