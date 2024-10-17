#include<stack>
#include<string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
    
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(!st.empty() && ch == ')' && st.top() == '('){
                    st.pop();
                }
                else if(!st.empty() && ch == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(!st.empty() && ch == ']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return (st.empty());
    }  
    //S.C. O(n) T.C. O(n)
};