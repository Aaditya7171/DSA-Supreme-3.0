class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int res = 0, sign = 1, num = 0;

        for(char ch : s){
            if(ch >= '0' && ch <= '9')
                num = num * 10 + (ch - '0');
            else if(ch == '+'){
                res += sign * num;
                sign = 1, num = 0;
            }
            else if(ch == '-'){
                res += sign * num;
                sign = -1, num = 0;
            }
            else if(ch == '('){
                st.push(res);
                st.push(sign);
                res = 0, sign = 1;
            }
            else if(ch == ')'){
                res += sign * num;
                int sign = st.top(); st.pop();
                res *= sign;
                res += st.top();
                st.pop();
                num = 0, sign = 1;
            }
        }
        res += sign * num;
        return res;
    }
};