#include<iostream>

int slowExp(int a, int b){
    
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    return ans;
    //t.c.--> O(b)
}

int fastExp(int a, int b){
    
    int ans = 1;
    while(b > 0){
        if(b & 1){
            //b is odd
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
    //t.c.--> O(log n)   since {(b/2)-->(b/2)-->(b/2)}
}

int main(){

    int a = 5, b = 5;

    int ans = fastExp(a,b);

    std::cout << ans;
}