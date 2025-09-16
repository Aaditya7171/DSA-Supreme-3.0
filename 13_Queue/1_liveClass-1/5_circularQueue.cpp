#include<iostream>
#include<queue>

using namespace std;

class CircularQueue{
    private:
        int* arr;
        int n, front, back;
    public: 
        CircularQueue(int size){
            this->n = size;
            arr = new int[size];
            front = -1;
            back = -1;
        }
    void push(int val){
        // 4 cases
        // case 1 : empty queue
        if((front == 0 && back == n - 1) || (back == front-1)){
            cout << "Overflow" <<endl;
        }
        // case 2 : single element in the queue
        else if(front == -1 && back == -1){
            front++;
            back++;
            arr[back] = val;
        }
        // case 3 : circular nature
        else if(back == n - 1 && front != 0){
            back = 0;
            arr[back] = val;
        }
        // case 4 : normal insertion
        else {
            back++;
            arr[back] = val;
        }
    }
    void pop(){
        // 4 cases
        // case 1 : empty queue(underflow)
        if(front == -1 && back == -1){
            cout<<"Underflow"<<endl;
        }
        // case 2 : only one element present
        else if(front == back){
            arr[front] = -1;
            front = -1;
            back = -1;
        }
        // case 3 : circular nature
        else if(front == n - 1){
            arr[front] = -1;
            front = 0;
        }
        // case 4 : normal deletion   
        else {
            arr[front] = -1;
            front++;
        }   
    }
    int getFront(){
        if(front == -1){
            cout << "No elements to display" <<endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }
    int getSize(){
        if(front == -1 && back == -1){
            return 0;
        }
        else if(back >= front) {
            return back - front + 1;
        }
        else {
            return n - front + back + 1;
        }
    }
    bool isEmpty(){
        if(front == -1 && back == -1){
            return true;
        } else {
            return false; 
        }
    }
    void print() {
        for (int i=0; i<n;i++){
            cout<<arr[i]<<" ";
        } cout << endl;
    }
};


int main() {
    CircularQueue cq(5);
    cq.push(1); 
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.print(); // 1 2 3 4 5 
    cq.pop();
    cq.pop();
    cq.print(); // -1 -1 3 4 5  
    cout << cq.getSize()<<endl; // 3
    cout << cq.getFront()<<endl; // 3
    cout << cq.isEmpty()<<endl; // 0
    cq.push(6);
    cq.print(); // 6 -1 3 4 5 ---> no memorty wastage as we are using a circular array
    cout << cq.getSize()<<endl; // size is still showing 3 --> need conditionals---> getting 4

    return 0;
}
