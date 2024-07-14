#include<iostream>
using namespace std;

int main(){
    //creation
    char arr[100];
     
    // cout<<"enter your name: ";

    //taking input in char arrays->
    // cin >> arr;

    // ' ', tab, newline are default delimiters for char arrays if we are using 'cin' to take input
    // we can use "getline()" to overcome this
    // cin.getline(arr, 100);//getline(arr_name, size) : size -->max charecters that can be stored in the array including null charecter

    // //printing char array(we can directly print like shown below or we can use loop)
    // cout <<"Hey! " << arr << endl;;
    
    // cout << arr[0] << "-->" << (int)arr[0] << endl;;
    // cout << arr[1] << "-->" << (int)arr[1] << endl;;
    // cout << arr[2] << "-->" << (int)arr[2] << endl;;
    // cout << arr[3] << "-->" << (int)arr[3] << endl;;
    // cout << arr[4] << "-->" << (int)arr[4] << endl;//if name has 4 charecters then arr[4] will be 0(null)

    char arr1[100];
    cout << "Enter input: ";
    cin.getline(arr1, 100, '\t');//stops taking input when '\t' comes in input
    //'\t' is a delimiter charecter and is optional
    cout << arr1;

    return 0;
} 