#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // // Creation
    // priority_queue<int> pq; // by default-> max heap
    // pq.push(5);
    // pq.push(10);
    // pq.push(20);
    // pq.push(15);
    // // access the element
    // cout << pq.top() << endl;
    // // deletion
    // pq.pop();
    // cout << pq.top() << endl;
    // cout << pq.size() << endl;
    // cout << pq.empty() << endl;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(15);
    cout << minHeap.top() << endl;

    // return 0;
}
