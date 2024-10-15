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
    std::cout << stk.empty() << " \n";

    return 0;
}