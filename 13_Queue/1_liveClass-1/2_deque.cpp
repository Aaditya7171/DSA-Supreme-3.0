#include<iostream>
#include<queue>
using namespace std;

int main() {
    // deque is a double ended queue, we can push and pop from both ends of the container(front and back)
    // creation
    // syntax: deque<data_type> name;
    deque<int> dq;

    // insertion
    dq.push_front(1); // 1
    dq.push_front(2); // 2 1
    dq.push_front(3); // 3 2 1
    dq.push_back(4); // 3 2 1 4
    dq.push_back(5); // 3 2 1 4 5
    dq.push_back(6); // 3 2 1 4 5 6
    
    // accessing
    cout << dq.back() << "\n"; // 6
    cout << dq.front() << "\n"; // 3

    // size
    cout << "size : " << dq.size() << "\n"; // 6

    // empty
    cout << dq.empty() << "\n"; // false (0) 
    
    // deletion
    dq.pop_front(); // 2 1 4 5 6
    dq.pop_back(); // 2 1 4 5

    // printing
    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
    return 0;
}