class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int> st;
       st.push(-1);
       int maxLen = 0;
       for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            } 
            else{
                st.pop(); // popping out 1 element each time, and if stack is not empty that means a valid pair has been found
                if(st.empty()){
                    st.push(i); // invalid found
                } 
                else {
                    int len = i - st.top(); // valid found -> calculate its length
                    maxLen = max(len, maxLen);
                }
            }
       } 
       return maxLen;
    }
};