class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        // step 1-->
        q.push(t);
        // step 2--> pop invalid(older requests, older than t-3000)
        while(!q.empty() && q.front() < (t-3000)){
            q.pop();
        }
        // step 3-> now q has only number of recent calls : R = [t-3000, t]
        return q.size();  
    }
};