#include<iostream>

class Solution//gfg solution(GCD of two numbers)
{
    public:
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
};

int main() {

    int a, b;

    std::cout << "Enter value of a and b: ";

    std::cin >> a >> b;

    Solution sol;

    int hcf = sol.gcd(a,b);

    std::cout << "HCF of a=" << a << " and b=" << b << " is: " << hcf;

    return 0;
}