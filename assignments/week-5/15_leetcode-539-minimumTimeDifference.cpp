class Solution {
public:
    int convertToMin(string& time){
        int hr = stoi(time.substr(0,2));
        int min = stoi(time.substr(3,2));
        return (60 * hr + min);
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto time : timePoints){
           mins.push_back(convertToMin(time)); 
        }
        sort(mins.begin(), mins.end());
        int ans = INT_MAX;
        for(int i = 1; i < mins.size(); i++){
            ans = min(ans, mins[i] - mins[i - 1]);
        }
        int lastDiff =  1440 - mins[mins.size() - 1] + mins[0];
        ans = min(ans, lastDiff);
        return ans;
    }
};
// TC: O(n log n) → sorting n times; 
// SC: O(n) → storing converted minutes.
