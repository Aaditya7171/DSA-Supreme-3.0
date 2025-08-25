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

    vector<int>nextGreaterElement(vector<int>&v){
        stack<int>st;
        st.push(-1);
        vector<int>ans(v.size(), -1);

        for(int i = v.size()-1; i >= 0; i--){
            while(!st.empty() && st.top() != -1 && v[st.top()] < v[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int>prevGreaterElement(vector<int>&v){
        stack<int>st;
        st.push(-1);
        vector<int>ans(v.size(), -1);

        for(int i = 0; i < v.size(); i++){
            while(!st.empty() && st.top() != -1 && v[st.top()] <= v[i]) st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    long long sumSubarrayMins(vector<int>& arr) {
        auto next = nextSmallerElement(arr);
        auto prev = prevSmallerElement(arr);

        long long sum = 0;

        for(int i = 0; i < arr.size(); i++){
            long long nextIndex = next[i] == -1 ? arr.size() : next[i];
            long long prevIndex = prev[i];
            long long left = i - prevIndex;
            long long right = nextIndex - i;
            sum += left * right * arr[i];
        }
        return sum;
    }

    long long sumSubarrayMax(vector<int>& arr) {
        auto next = nextGreaterElement(arr);
        auto prev = prevGreaterElement(arr);

        long long sum = 0;

        for(int i = 0; i < arr.size(); i++){
            long long nextIndex = next[i] == -1 ? arr.size() : next[i];
            long long prevIndex = prev[i];
            long long left = i - prevIndex;
            long long right = nextIndex - i;
            sum += left * right * arr[i];
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        auto sumOfMaximums = sumSubarrayMax(nums);
        auto sumOfMinimums = sumSubarrayMins(nums);
        return (sumOfMaximums-sumOfMinimums); 
    }
};