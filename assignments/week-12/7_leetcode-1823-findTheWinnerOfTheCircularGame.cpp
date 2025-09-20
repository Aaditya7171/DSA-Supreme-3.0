class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        // all players should be into queue initially
        for(int i = 1; i <= n; i++){
            q.push(i);
        }
        while(q.size() > 1){
            for(int i = 1; i < k; i++){
                // have to keep all those players in the queue->push again
                auto player = q.front();
                q.pop();
                q.push(player); // not eliminated yet
            }
            // kth player must be eliminated
            q.pop();
        }
        return q.front();
    } // T.C: O(n*k), S.C: O(n)
};