#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    } cout << endl;
}

void reverseQueueUsingStack(queue<int>&q){
    stack<int> st;
    // Transfer all elements from queue to stack
    while(!q.empty()){
        int elem = q.front();
        q.pop();
        st.push(elem);
    }
    // Transfer all elements back from stack to queue
    // This reverses the order
    while(!st.empty()){
        int elem = st.top();
        st.pop();
        q.push(elem);
    }
}

void reverseQueueRecursively(queue<int>& q){
    // Base Case
    if(q.empty()) return;
    // Recursive case
    int frontElem = q.front();
    q.pop();
    reverseQueueRecursively(q);
    // backtracking
    q.push(frontElem); 
}


int main(){
    queue<int> q;
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);
    q.push(55);
    q.push(66);
    // reverseQueueUsingStack(q);
    print(q);
    reverseQueueRecursively(q);
    print(q);

    return 0; 
}