#include<iostream>

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val){
        if(top == size - 1){
            //stack is already full. inserting new element will cause stack overflow
            std::cout << "Stack Overflow." << "\n";
        }
        else{
            top++;
            arr[top] = val;
        }  
    }

    void pop(){
        if(top == -1){
            //no elements to pop, Stack Underflow
            std::cout << "Stack Underflow" << "\n";
        }
        else {
            // arr[top] = -1;//optional
            top--;
        }
    }

    int getSize(){
        size = top + 1;
        return size;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int getTop(){
        if(top == -1){
            std::cout << "Stack is Empty." << "\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    //there is no print function in stack but it's for understanding
    void print(){
        std::cout << "Printing the stack: ";
        for(int i = 0; i <= top ; i++){
            std::cout <<  arr[i] << " ";
        } std::cout << "\n";
    }
};

int main(){
    //creating a stack of size 5
    Stack s(5);
    // s.print();
    //since we have not pushed any element in the stack, "0 0 0 0 0" will be getting printed(as we are using dynamic memory)
    //but in our case, memory addresses are getting printed, this is becuase we haven't initialized it(it's better practice to always initialize with 0 to avoid unpredictable behavior) and
    //"Differences in compiler implementations can lead to discrepancies in output, especially when dealing with uninitialized variables."
   
    //insetion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    s.push(70);//stack overflow
    s.print();

    //accesing
    std::cout << "Topmost element of the stack is: " << s.getTop() << "\n";
    
    //size
    std::cout << "Size of the stack is: " << s.getSize() << "\n";

    //isEmpty
    s.isEmpty() ? std::cout << "Stack is Empty." << "\n" : std::cout << "Stack is not Empty." << "\n";

    //deletion
    s.print(); 
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.pop();//stack underflow



   

    return 0;
}