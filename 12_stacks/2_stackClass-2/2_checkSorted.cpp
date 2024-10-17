#include<iostream>
#include<stack>
#include<climits>

bool checkSorted(std::stack<int> &st, int elem1){
    if(st.empty()){
        return true;
    }

    int elem2 = st.top();
    st.pop();

    if(elem2 < elem1){
        int ans = checkSorted(st, elem2);
        st.push(elem2);
        return ans;
    }
    else {
        return false;
    }
}

int main() {

    std::stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int elem1 = INT_MAX;

    checkSorted(st, elem1) ? std::cout << "Stack is Sorted." << "\n" : std::cout << "Stack is not Sorted." << "\n";
    
    //T.C. O(n), S.C. O(n)

    return 0;
}