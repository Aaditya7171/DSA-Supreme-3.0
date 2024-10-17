#include<iostream>
#include<stack>

void sortedInsert(std::stack<int> &s, int value){
    // if(!s.empty() && s.top() < value){//if we are accessing the stack like this then make sure that stack is not empty
    if(s.empty() || !s.empty() && s.top() < value){//previous condition was failing to insert the smallest elem
        s.push(value);
        return;
    }
    
    int topElem = s.top();
    s.pop();

    sortedInsert(s, value);

    s.push(topElem);
}


int main(){

    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value = 1;
    sortedInsert(s, value);

    std::cout << "Sorted stack with inserted value " << value <<" is: ";
    while(!s.empty()){
        std::cout << s.top() << " ";
        s.pop();
    }
}