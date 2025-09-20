class MyStack {
public:
    // Appraoch 1--> using 2 queues
    // T.C.-> push()->O(n), pop()-top()-empty()->O(1)
    /*
    queue<int> q1, q2;
    MyStack() {
        
    }

    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int elem = q1.front();
        q1.pop();
        return elem;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
    */
    // Approach 2-> using single queue
    // T.C.-> push()->O(n), pop()-top()-empty()->O(1)
    queue<int> q;
    MyStack() {
        
    }

    void push(int x) {
        q.push(x);
        int size = q.size()  - 1;
        while(size--){
            int front = q.front();
            q.pop();
            q.push(front);
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};