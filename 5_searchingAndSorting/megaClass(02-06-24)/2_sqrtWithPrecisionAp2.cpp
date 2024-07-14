
#include<iostream>
using namespace std;

double mySqrtWithPrecision(int n) {
    double s = 0, e = n;
    double ans = -1;

    while(e - s >= 0.00000001){
        double mid = s + (e-s) / 2;
        double square = mid*mid;
        if(square <= n){
            ans = mid;
            s = mid;
        }
        else{
            e = mid;
        }
    }
    return ans;
}


 

int main(){

    int num = 63;

    double ans = mySqrtWithPrecision(num);

    // cout << ans;

    printf("precision Sqrt Ap2:  %.8f\n", ans);

    return 0;
}


//t.c. O(logn)+O(precision*10)--> O(log n) + O(precision)
