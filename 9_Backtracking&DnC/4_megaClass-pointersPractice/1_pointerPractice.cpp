#include<iostream>
using namespace std;

int main() {
    int x[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    int *n = &x[0][0];

    cout << *(*(x+2) + 1) << "\n";
    cout << *x << "\n";
    cout << *(*x + 2) + 5 << "\n";
    cout << *(*(x+1)) << "\n";
    cout << *(*(x) + 2) + 1 << "\n";
    cout << *(*(x+1) + 3) << "\n";
    cout << *(n+2) << "\n";
    cout << *n++ << "\n";

}