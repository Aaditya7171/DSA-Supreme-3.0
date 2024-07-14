#include<iostream>

int powerOfTwo(int n)
{
    if(n == 0) return 1;

    int res = 2 * powerOfTwo(n-1);

    return res;
}

int main()
{
    int n = 10;

    int ans = powerOfTwo(n);

    std::cout << "2^" << n << "=" << ans;

    return 0;
}