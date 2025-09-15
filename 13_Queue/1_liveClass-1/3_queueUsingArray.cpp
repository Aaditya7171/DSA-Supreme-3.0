#include<iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int n;
        int front;
        int back;
    public:
        Queue(int size){
            arr = new int[size];
            n = size;
            front = -1, back = -1;
        }
        void push(int val){
            if(back == n - 1){
                // queue is full
                cout << "queue is full" << endl;
            }
            else if(front == -1 && back == -1){
                // first element
                back++;
                front++;
                arr[back] = val;
            }
            else {
                // normal case
                back++;
                arr[back] = val;
            }
        }
        void pop(){
            if(front == -1 && back == -1){
                cout << "queue is empty" << endl;
            }
            else if(front == back){
                // single element in the queue
                arr[back] = -1;
                front = -1;
                back = -1;
            }
            else {
                // multiple elements in the queue
                arr[front] = -1;
                front++;
            }
        }
        int getSize(){
            // number of elements
            if(front == -1 && back == -1) return 0;
            else return back-front+1;
        }
        getFront(){
            if(front == -1){
                cout << "queue is empty" << endl;
            }
            else {
                return arr[front];
            }
        }
        getBack(){
            if(back == -1){
                cout << "queue is empty" << endl;
            }
            else {
                return arr[back];
            }
        }
        bool isEmpty(){
            if(front == -1 && back == -1){
                return true;
            } else {
                return false;
            }
        }
};

int main(){
    Queue q(8);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.getSize() << endl;
    cout << q.getFront() << endl;
    cout << q.getBack() << endl;
    cout << q.isEmpty() << endl;
    q.pop();
    cout << q.getFront() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.getFront() << endl;
    cout << q.getSize() << endl;
    q.pop();

    return 0;
}