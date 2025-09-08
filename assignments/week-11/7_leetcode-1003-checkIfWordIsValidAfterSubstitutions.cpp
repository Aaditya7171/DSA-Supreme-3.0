class Solution {
public:
    bool isValid(string s) {
        // Approach 1: t.c. O(n)*O(n/3) = O(n^2)
        // if(s.size() == 0) return true;
        // int fnd = s.find("abc");
        // if(fnd != string::npos){
        //     // found the string
        //     string tleft = s.substr(0, fnd);
        //     string tright = s.substr(fnd + 3, s.size());
        //     return isValid(tleft + tright);
        // }
        // return false;

        // Approach 2: (optimixed->O(n))
        if(s[0] != 'a') return false;
        stack<char>st;
        for(char c : s) {
            if(c == 'a')
                st.push(c);
            else if(c == 'b') {
                if(!st.empty() && st.top() == 'a')
                    st.push('b');  
                else 
                    return false;
            }
            else{
                if(!st.empty() && st.top() == 'b') {
                    st.pop();
                    if(!st.empty() && st.top()== 'a')
                        st.pop();
                    else
                        return false;
                }
                else 
                    return false;
            }
        }
        return st.empty();
    }
};