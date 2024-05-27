#include<iostream>
using namespace std;

bool checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}
int main(){
    int n;
    cin >> n;
    bool ans = checkMember(n);

    if(ans) cout << "true";
    else cout << "false";
}

/*
void checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return false;
            }
            else if(temp>n){
                return true;
            }
        }
    }

}
*/
