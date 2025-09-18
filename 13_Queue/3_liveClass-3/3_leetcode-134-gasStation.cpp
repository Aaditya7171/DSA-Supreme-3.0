class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, deficit = 0, balance = 0;
        for(int i = 0; i < gas.size(); i++){
            balance = balance + gas[i] - cost[i];
            // +ve ---> balance, -ve ---> deficit
            if(balance < 0) {
                deficit += abs(balance);
                // if deficit came, then start needs to be updated
                start = i + 1;
                balance = 0;
            }
        }
        return (balance - deficit >= 0) ? start : -1;
    }
};