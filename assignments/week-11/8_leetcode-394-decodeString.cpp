class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(auto i : s) {
            if(i == ']') {
                // collect string inside [...]
                string stringToRepeat = "";
                while(!st.empty() && st.top() != "["){
                    string top = st.top(); 
                    stringToRepeat += top; 
                    st.pop();
                }
                st.pop();// remove '['
                // collect number
                string numericTimes = "";
                while(!st.empty() && isdigit(st.top()[0])){
                    numericTimes += st.top();
                    st.pop();
                }
                reverse(numericTimes.begin(), numericTimes.end());
                int n = stoi(numericTimes);
                string currentDecode = "";
                while(n--){
                    currentDecode += stringToRepeat;
                }
                st.push(currentDecode);
            } 
            else {
                string temp(1, i);
                st.push(temp);
            }
        }
        // final answer
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};