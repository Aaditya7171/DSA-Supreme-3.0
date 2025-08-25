class Solution {
public:
    vector<int>nextSmallerElement(vector<int>&v){
        stack<int>st;
        st.push(-1);
        vector<int>ans(v.size(), -1);

        for(int i = v.size()-1; i >= 0; i--){
            while(!st.empty() && st.top() != -1 && v[st.top()] > v[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int>prevSmallerElement(vector<int>&v){
        stack<int>st;
        st.push(-1);
        vector<int>ans(v.size(), -1);

        for(int i = 0; i < v.size(); i++){
            while(!st.empty() && st.top() != -1 && v[st.top()] >= v[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        //implementing monotonic stack
        auto next = nextSmallerElement(arr);
        auto prev = prevSmallerElement(arr);

        int sum = 0;//sum of all subarray's min elemetns
        const int mod = 1e9 + 7;

        for(int i = 0; i < arr.size(); i++){
            // for each index, we need to find
            // how many times the element is contributing to the sum
            int nextIndex = next[i] == -1 ? arr.size() : next[i];
            int prevIndex = prev[i];
            int left = i - prevIndex;
            int right = nextIndex - i;
            long long noOfTimes = (left % mod * right % mod) % mod;
            long long total = (noOfTimes * arr[i]) % mod;
            sum = (sum + total) % mod;
        }
        return sum;
    }
};