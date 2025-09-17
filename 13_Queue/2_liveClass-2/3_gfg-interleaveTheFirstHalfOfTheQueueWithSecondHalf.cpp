class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        //Getting wrong answer for large test cases
        // queue<int> q1;
        // int n = q.size();
        // int half = n / 2;
        // for(int i = 0; i < half; i++){
        //     q1.push(q.front());
        //     q.pop();
        // } // first half-> "q1", second half-> "q"
        // while(!q1.empty()){
        //     q.push(q1.front());
        //     q1.pop();
        //     q.push(q.front());
        //     q.pop();
        // }
        
        // need to take two seperate queues to avoid the drifting/rotations
        int n = q.size();
        int half = n / 2;
        queue<int> q1, q2, res;
        for(int i = 0; i < half; i++){
            q1.push(q.front());
            q.pop();
        }
        for(int i = 0; i < half; i++){
            q2.push(q.front());
            q.pop();
        }
        while(!q1.empty() && !q2.empty()){
            res.push(q1.front());
            q1.pop();
            res.push(q2.front());
            q2.pop();
        }
        q = res;
    }
};