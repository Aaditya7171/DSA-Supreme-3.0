#include<iostream>
#include<stack>

int main(){

    //creation
    std::stack<int> stk;
    //insertion
    stk.push(10);//10
    stk.push(20);//10,20
    stk.push(30);//10,20,30
    stk.push(40);//10,20,30,40
 
    //size()
    std::cout << "Size: " << stk.size() << "\n";

    //pop()
    stk.pop();//10,20,30
    
    //top()
    std::cout << "Topmost element: " << stk.top() << "\n";
  
    //empty()
    if(stk.empty() == true){
        std::cout << "Stack is empty"  << "\n";
    } else{
        std::cout << "Stack is not empty" << "\n";
    }

    //swap();
    std::stack<int> st1;
    std::stack<int> st2;

    st1.push(1);
    st1.push(2);
    st2.push(3);
    st2.push(4);

    st1.swap(st2);

    std::cout << st1.top() << "\n";//4 

    return 0;
}