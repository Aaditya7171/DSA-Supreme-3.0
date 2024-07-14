#include<iostream>

int main() {
    
    int a = 5;
    int* p = &a;
    int** q = &p;//two level pointer
    int*** r = &q;//three level pointer

    std::cout << *r << " " << **r << " " << ***r;

    return 0;
}