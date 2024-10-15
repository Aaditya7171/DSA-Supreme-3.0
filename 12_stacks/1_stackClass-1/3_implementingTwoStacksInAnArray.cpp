#include<iostream>
 
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity){
        arr = new int(capacity);
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value){
        if(top2 - top1 == 1){
            std::cout << "Stack Overflow." << "\n";
        }
        else{ 
            top1++;
            arr[top1] = value;
        }
    }

    void push2(int value){
        if(top2 - top1 == 1){
            std::cout << "Stack Overflow." << "\n";
        }
        else{
            top2--;
            arr[top2] = value;
        }

    }

    void pop1(){
        if(top1 == -1){
            std::cout << "Stack Underflow." << "\n";
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            std::cout << "Stack Underflow." << "\n";
        }
        else{
            arr[top2] = 0;
            top2++;
        }

    }


    void print(){
        std::cout << "Top1: " << top1 << "\n";
        std::cout << "Top2: " << top2 << "\n";
        for(int i = 0; i < size; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }

};

int main() {

    Stack s1(5);
    s1.push1(10);
    s1.push1(20);
    s1.push1(30);
    s1.print();

    s1.push2(60);
    s1.push2(70);
    s1.print();

    s1.pop1();
    s1.pop1();
    s1.pop1();
    s1.print();
    s1.pop1();
    s1.print();

    s1.pop2();
    s1.pop2();
    s1.print();
    s1.pop2();
    s1.print();

    return 0;
}