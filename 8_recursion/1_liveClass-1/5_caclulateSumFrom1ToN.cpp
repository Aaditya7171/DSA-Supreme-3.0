#include<iostream>

int getSum(int n)
{   
    if(n == 1) return 1;//base case
     
    int recAns = getSum(n-1);//recursive call

    int res = n + recAns;//recurive relation / processing

    return res;
}

int main()
{
    int n = 5;

    int sum = getSum(n);

    std::cout << "Sum from 1 to " << n << " is: " << sum;

    return 0;
}