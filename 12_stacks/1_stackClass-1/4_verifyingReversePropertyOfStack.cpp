#include<iostream>
#include<stack>


int main() {
    std::stack<char> s;
    std::string name = "kuni";
    //insertion
    for(int i = 0; i < name.length(); i++){
        char ch = name[i];
        s.push(ch);
    }

    //retrieval
    while(!s.empty()){
        std::cout << s.top() << " ";
        s.pop();
    }

}