class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int>q;
        // store index in th queue because it'll let us know if current element is present in the current window
        // step 1: process first window
        for(int i = 0; i < k; i++){
            int elem = arr[i];
            if(elem < 0){
                q.push_back(i); // storing indexes of all the negative numbers
            }
        }
        // step 2: process remaining windows -> ans/removal/addition
        vector<int> ans;
        for(int i = k; i < arr.size(); i++){
            // step 2.1-> store answer of last window
            // so when we process last window, the ans of it's previous window is stored
            if(q.empty()){
                ans.push_back(0);
            } else {
                int index = q.front();
                int elem = arr[index];
                ans.push_back(elem);
            }
            // step 2.2-> removal of elements which are not inside current window
            if(!q.empty() && i - q.front() >= k){
                q.pop_front();
            }
            // step 2.3-> addition of new element
            int elem = arr[i];
            if(elem < 0){
                q.push_back(i);
            }
        }
        // step 3-> last window
        q.empty() ? ans.push_back(0) : ans.push_back(arr[q.front()]);
        return ans;
    }
};