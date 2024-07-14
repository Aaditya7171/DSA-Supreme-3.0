
#include<iostream>
using namespace std;

int mySqrt(int n) {
    int s = 0, e = n;
    int ans = -1;

    while(s <= e){
        int mid = s + (e-s) / 2;
        if(mid * mid <= n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

double myPrecisionSqrt(int n){
    double sqrt = mySqrt(n);
    int prec = 8;
    double step = 0.1;
    while(prec--){
        double j = sqrt;//j-->7.0
        while(j * j <= n){
            //store and compute
            sqrt = j;
            j = j + step;//j-->7.1
        }
        step = step / 10;
        //after that while loop, we have got ans till 1-precision 
    }
    return sqrt;
}
 

int main(){

    int num = 63;

    double ans = myPrecisionSqrt(num);

    // cout << ans;
    //cout only prints upto 5 precision

    //to print more than 5 precision

    printf("precision Sqrt:  %.8f\n", ans);

    return 0;
}


//t.c. O(logn)+O(precision*10)--> O(log n) + O(precision)
