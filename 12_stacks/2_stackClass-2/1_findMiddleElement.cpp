#include<iostream>
#include<stack>

void findMiddle(std::stack<int> &st, int count, int &size){
     
    if(count == (size / 2)){
        std::cout << "Middle element of the stack is: " << st.top() << " \n";
        return;
    }

    int topElement = st.top();
    st.pop();

    findMiddle(st, count + 1, size);

    st.push(topElement);
}

int main() {

    std::stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int count = 0, size = 5;

    findMiddle(st, count, size);
    //T.C. O(n), S.C. O(n)
    
    return 0;
}