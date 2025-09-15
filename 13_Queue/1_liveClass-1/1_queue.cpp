#include<iostream>
#include<queue>
using namespace std;

int main() {
    // queue is a linear data structure, we can push elements only at the back and pop elements only from the front
    // creation
    // syntax: queue<data_type> name;
    queue<int> q;

    // insertion
    // push(element) -> O(1)
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
    // accessing
    cout << q.back() << "\n"; // 40 
    cout << q.front() << "\n"; // 10

    // deletion(happens from front)
    q.pop();
    cout << q.front() << "\n"; // 20

    // size
    cout << q.size() << "\n"; // 3

    // check if empty or not
    cout << q.empty() << "\n"; // false (0)

    // printing
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
        // 20 30 40
    cout << endl;

    return 0;
}