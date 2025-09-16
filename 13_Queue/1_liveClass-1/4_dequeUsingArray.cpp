#include<iostream>
#include<queue>

using namespace std;

class Deque{
    private:
        int* arr;
        int n, front, back;
    public: 
        Deque(int size){
            this->n = size;
            arr = new int[size];
            front = -1;
            back = -1;
        }
    void pushFront(int val){
        if(front == 0){
            cout << "queue is full" << endl;
        }
        else if(front == -1 && back == -1){
            front++, back++;
            arr[front] = val;
        }
        else {
            front--;
            arr[front] = val;
        }
    }
    void pushBack(int val){
        if(back == n - 1){
            cout << "queue is full" << endl;
        }
        else if(front == -1 && back == -1){
            back++;
            front++;
            arr[back] = val;
        }
        else {
            back++;
            arr[back] = val;
        }
    }
    void popFront(){
        if(front == -1 && back == -1){
            cout << "queue is empty" << endl;
        }
        else if(front == back){
            arr[back] = -1;
            front = -1;
            back = -1;
        }
        else {
            arr[front] = -1;
            front++;
        }
    }
    void popBack(){
        if(front == -1 && back == -1){
            cout << "queue is empty" << endl;
        }
        else if(front == back){
            arr[back] = -1;
            front = -1;
            back = -1;
        }
        else {
            arr[back] = -1;
            back --;
        }
    }
    void print() {
        for (int i=0; i<n;i++){
            cout<<arr[i]<<" ";
        } cout << endl;
    }
};


int main() {
    Deque dq(5);
    dq.pushFront(10); 
    dq.pushFront(100); // 10 0 0 0 0 -> still overflowing->memory wastage-> can be solved using circular queue
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.pushBack(50);
    dq.print(); // 10 20 30 40 50 
    dq.popFront();
    dq.print(); // -1 20 30 40 50
    dq.popBack();
    dq.print(); // -1 20 30 40 -1
    dq.pushFront(60);
    dq.print(); // 60 20 30 40 -1

    return 0;
}
