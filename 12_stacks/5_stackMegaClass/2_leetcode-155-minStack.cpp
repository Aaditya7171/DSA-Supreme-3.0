#include <vector>
using namespace std;

class MinStack
{
public:
    vector<pair<int, int>> v; // pair => {value, minimun element till now}
    MinStack()
    {
    }

    void push(int val)
    {
        if (v.empty())
        {
            v.push_back({val, val});
            return;
        }
        // int min = val;
        // if(v.back().second < min){
        //     min = v.back().second;
        //     v.push_back({val, val});
        // }
        // another way to do the same
        v.push_back({val, v.back().second < val ? v.back().second : val});
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back().first;
    }

    int getMin()
    {
        return v.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */