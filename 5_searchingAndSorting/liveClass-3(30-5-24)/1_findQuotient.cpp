//find quotient without using "/" && "%" operators
#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor)
{
    int s = 0;
    int e = dividend;
    int ans = -1;
    int mid = s + ((e - s) >> 1);//cant use "/ " 

    while(s <= e){
        if((divisor * mid) == dividend){
            return mid;
        }
        if((divisor * mid) < dividend){
            ans = mid;//store and compute
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + ((e - s) >> 1);
    }
    return ans;
}

int main(){

    int dividend = 35;
    int divisor = 4;

    int ans = getQuotient(abs(dividend), abs(divisor));

    if(dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0){
        ans = 0 - ans;
    }
    cout << "Final ans: " << ans;

    return 0;
}
//t.c. --> O(logn)
//s.c. --> O(1)