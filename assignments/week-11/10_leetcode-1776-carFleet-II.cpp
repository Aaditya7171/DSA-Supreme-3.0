class Solution {
public:
    vector<double> getCollisionTimes(vector<vector<int>>& cars) {
        // Collision time of ith car with the next carr
        vector<double> ans(cars.size(), -1);
        stack<int>st;
        for(int i = cars.size() - 1; i >= 0; --i){
            // Check if car ahead of current car is faster
            while(!st.empty() && cars[st.top()][1] >= cars[i][1])
                st.pop(); // collision not possible
            while(!st.empty()){
                double colTime = (double)(cars[st.top()][0] - cars[i][0]) / (cars[i][1] - cars[st.top()][1]);  
                if(ans[st.top()] == -1 || colTime <= ans[st.top()]){
                    ans[i] = colTime; // collision possible -> update
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};