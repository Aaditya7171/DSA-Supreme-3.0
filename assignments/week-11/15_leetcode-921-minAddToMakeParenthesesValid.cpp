class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ans = 0;
        for(auto ch : s) {
            if(ch == '('){
                ans++;
                st.push(ch);
            }
            else {
                if(!st.empty()){
                    st.pop(); // pair found
                    ans--;
                }
                else{
                    ans++; // case-> ()))
                }
            }
        }
        return ans;
    }
};