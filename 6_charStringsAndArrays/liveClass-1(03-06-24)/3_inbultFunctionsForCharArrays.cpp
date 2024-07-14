#include<iostream>
#include <cstring>
using namespace std;


int main(){
    
    char arr1[100];
    cout <<"Enter the input ";
    cin>>arr1;

    char arr2[100];
    cout <<"Enter the input ";
    cin>>arr2;

    cout << strcat(arr1,arr2);

    cout << strlen(arr1);
    
    return 0;  
}