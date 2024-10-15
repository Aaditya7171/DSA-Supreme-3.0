#include<iostream>
#include<stack>

void insertAtBottem(std::stack<int> &st, int value){
    if(st.empty()){
        st.push(value);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottem(st, value);

    st.push(topElement);
}

int main() {
    std::stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int value = 10;

    insertAtBottem(st, value);

    std::cout << "Stack after Insetion: ";
    while(!st.empty()){
        std::cout << st.top() << " ";
        st.pop();
    } std::cout << "\n";

    return 0;
}