#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverseInGroupK(queue<int>&q, int k, int count){
    // time complexity: O(n) + O(k)
    // space complexity: O(k)
    if(count >= k){
        // reverse needed
        // fetch K elements from queue and put them in a stack.
        stack<int> s;
        for(int i = 0; i < k; i++){
            int elem = q.front();
            q.pop();
            s.push(elem);
        }
        // fetch k elements from stack and push them back into the queue.
        for(int i = 0; i < k; i++){
            int elem = s.top();
            s.pop();
            q.push(elem);
        } // 1 case done.
        reverseInGroupK(q, k, count - k);// recursive call.
    }
    else {
        // no need to reverse--> push as it is at the end of the queue.
        for(int i = 0; i < count; i++){
            int elem = q.front();
            q.pop();
            q.push(elem);
        }
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);

    int k = 3;
    int count = q.size(); // will track the number of elements to be reversed.
    reverseInGroupK(q, k, count);
    print(q);

    return 0; 
}