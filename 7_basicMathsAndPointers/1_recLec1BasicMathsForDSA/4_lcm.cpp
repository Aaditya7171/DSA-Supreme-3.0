#include<iostream>

int gcd(int A, int B)
    {
    if(A == 0) return B;

    if(B == 0) return A;

    while(A > 0 && B > 0){
        if(A > B){
            A = A - B;
        }
        else {
            B = B - A;
        }
    }
    return A == 0 ? B : A;
}

int main() {

    int a, b;

    std::cout << "Enter value of a and b: ";

    std::cin >> a >> b;

    int hcf = gcd(a,b);

    int lcm = (a * b) / hcf;

    std::cout << "LCM of a=" << a << " and b=" << b << " is: " << lcm;

    return 0;
}