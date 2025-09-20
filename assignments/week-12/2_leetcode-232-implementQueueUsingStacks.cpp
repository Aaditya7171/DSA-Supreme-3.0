// Appraoch 1
class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    // push(x) → O(n)
    // pop() → O(1)
    // peek() → O(1)
    // empty() → O(1)

    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop() {
        int elem = s1.top();
        s1.pop();
        return elem;
    }
    int peek() {
        return s1.top();
    }
    bool empty() {
        return s1.empty(); 
    }
};

// Approach 2
class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    // push(x) → O(1)
    // pop() → O(n)
    // peek() → O(n)
    // empty() → O(1)
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int pop = -1;
        if(!s2.empty()){
            pop = s2.top();
        }
        else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            pop = s2.top();
        }
        s2.pop();
        return pop;
    }
    
    int peek() {
        int front = -1;
        if(!s2.empty()){
            front = s2.top();
        }
        else {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            front = s2.top();
        }
        return front;
    }
    
    bool empty() {
        return s1.empty() && s2.empty(); // dono stacks empty hain
    }
};

