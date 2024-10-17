#include<iostream>
#include<stack>
#include<string>

int countPairsOfRedundantBrackets(std::string s){

    std::stack<char> st;
    int pairsCount = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%'){
            st.push(ch);
        }
        else if(ch == ')'){
            bool hasOp = false;
            // Check elements between parentheses
            while(st.top() != '('){
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/' || top == '%'){
                    hasOp = true;
                }
                st.pop();// Pop the operator/operands inside the brackets
            }
            st.pop();// Pop the opening bracket '('
            if(!hasOp) pairsCount++;
        }
    }
    return pairsCount;
}

int main(){

    std::string str = "(3) + (5)";
    
    int count = countPairsOfRedundantBrackets(str);

    std::cout << "Pairs of redundant brackets in string " << str << " :" << count << "\n";

    return 0;
}