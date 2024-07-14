//Search and space 
#include<iostream>

class Solution {
public:
    int mySqrt(int x) {
        int s = 0, e = x;
        int ans = -1;

        while(s <= e){
            long long int mid = s + (e - s) / 2;
            long long int product = mid*mid;
            if(product == x){
                return mid;
            }
            if(product < x){
                //store and compute
                ans = mid;
                s = mid + 1;
            }
            else{
                //mid * mid > x
                e = mid - 1;
            }
        }
        return ans;
    }
};


int main(){
    int n = 63;
    Solution sol;
    int ans = sol.mySqrt(n);
    std::cout << ans;
    return 0;
}