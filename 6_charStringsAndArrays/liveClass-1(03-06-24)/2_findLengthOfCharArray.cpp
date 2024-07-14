#include<iostream>
using namespace std;

int getLength(char arr[], int size){

    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }

    //using for loop-->
    // for(int i = 0; i < size; i++){
    //     if(arr[i] == '\0'){
    //         break;
    //     }
    //     else{
    //         count++;
    //     }
    // }
    return count;
}

void replaceCharecter(char originalChar, char newChar, char arr[], int size){
    //original char --> '@'
    //newChar--> ' '

    for(int i = 0; i < size; i++){
        if(arr[i] == originalChar){
            arr[i] = newChar;
        }
    }
}
void convertIntoUpperCase(char arr[], int n){
    int length = getLength(arr, n);
    for(int i = 0; i < length; i++){
        char ch = arr[i];
        if(ch >= 'a' && ch<='z'){
            ch = ch - 'a' + 'A';
        }
        
    }
}
void convertIntoLowerCase(char arr[], int n){
    int length = getLength(arr, n);
    for(int i = 0; i < length; i++){
        char ch = arr[i];
        if(ch >= 'a' && ch<='z'){
            ch = ch - 'A' + 'a';
        }
        
    }
}

void reverseCharArray(char arr[], int n){
    
    int i = 0;
    int size = getLength(arr,n);
    int j = size-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++,j--; 
    }
}

bool checkPalindrome(char arr[], int size){
    int l = getLength(arr, size);
    int i = 0, j = l-1;

    while(i <= j){
        if(arr[i] == arr[j]){
            i++,j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    
    char arr[1000];
    cin>>arr;

    // getLength(arr, 1000);

    // replaceCharecter('@', ' ', arr, 1000);

    // convertIntoUpperCase(arr, 1000);

    // convertIntoLoweCase(arr, 1000);

    // reverseCharArray(arr, 1000);

    // cout << arr;

    cout << checkPalindrome(arr,100);
    
    return 0;  
}