#include <iostream>
#include <queue>
using namespace std;

class CircularDeque {
private:
    int *arr;
    int n, front, back;
public:
    CircularDeque(int size) { // Constructor
        this->n = size;
        arr = new int[size];
        front = -1;
        back = -1;
    }
    void pushFront(int val){
        if(front == 0 && back == n - 1){
            cout << "Overflow" << endl;
        }
        else if(front == -1 && back == -1){
            front++;
            back++;
            arr[front] = val;
        }
        else if(front == 0 && back != n - 1){
            front = n - 1;
            arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }
    }
    void pushBack(int val){
        if((front == 0 && back == n - 1) || (back == front-1)){
            cout << "Overflow" <<endl;
        }
        else if(front == -1 && back == -1){
            front++;
            back++;
            arr[back] = val;
        }
        else if(back == n - 1 && front != 0){
            back = 0;
            arr[back] = val;
        }
        else {
            back++;
            arr[back] = val;
        }
    }
    void popFront(){
        if(front == -1 && back == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == back){
            arr[front] = -1;
            front = -1;
            back = -1;
        }
        else if(front == n - 1){
            arr[front] = -1;
            front = 0;
        }
        else {
            arr[front] = -1;
            front++;
        }   
    }
    void popBack(){
        if(front == -1 && back == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == back){
            arr[back] = -1;
            front = -1;
            back = -1;
        }
        else if(back == 0){
            arr[back] = -1;
            back = n - 1;
        }
        else {
            arr[back] = -1;
            back--;
        }
    }
    void print (){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    CircularDeque cdq(5);
    cdq.pushFront(1);
    cdq.pushBack(2);
    cdq.pushBack(3);
    cdq.pushBack(4);
    cdq.print(); // Output: 1 2 3 4 0
    cdq.pushBack(5);
    cdq.print(); // Output: 1 2 3 4 5
    cdq.popFront();
    cdq.print(); // Output: -1 2 3 4 5
    cdq.pushFront(10);
    cdq.print(); // Output: 10 2 3 4 5
    cdq.popBack();
    cdq.print(); // Output: 10 2 3 4 -1

    return 0;
}