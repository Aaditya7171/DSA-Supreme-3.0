class Solution {
public:
    string removeDuplicates(string s) {
        // Using Stack
        stack<char> st;
        for(auto ch : s)
            !st.empty() && st.top() == ch ? st.pop() : st.push(ch);
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        // iterative Approach
        /*
        string ans = "";
        int n = s.length();

        for(int i = 0; i < n; i++){
            char currentChar = s[i];
            if(ans.empty()){
                ans.push_back(currentChar);
            }
            else if(currentChar == ans.back()){
                ans.pop_back();
            }
            else if(currentChar != ans.back()){
                ans.push_back(currentChar);
            }
        }
        return ans; 
        */
    }
};