#include<iostream>
#include<stack>

void insertAtBottem(std::stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int topElem = s.top();
    s.pop();

    insertAtBottem(s, value);

    s.push(topElem);
}

void reverseStack(std::stack<int> &s){
    if(s.empty()){
        return;
    }
    int topE = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottem(s, topE);
}

void print(std::stack<int> s){
    while(!s.empty()){
        std::cout << s.top() << " ";
        s.pop();
    } std::cout << "\n";
}

int main(){

    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    std::cout << "Stack before reverse: ";
    print(s);

    reverseStack(s);

    std::cout << "Stack After reverse: ";
    print(s);

    return 0;
}