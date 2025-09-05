class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        int n = s.size();
        // if odd size string then impossible to make pair
        if(n & 1)return -1;
        int ans = 0;
        stack<char> st;
        // removing valid parentheses
        for(char ch : s){
            if(ch == '{') st.push(ch);
            else {
                if(!st.empty() && st.top() == '{') st.pop();
                else st.push(ch);
            }
        }
        // Count reversals if stack is nonempty
        while(!st.empty()){
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            if(a == b) ans += 1; 
            else ans += 2;
        }
        return ans;
    }
};