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

//gfg practice : Expression contains redundant bracket or not
class Solution {
  public:
    int checkRedundancy(std::string s) {
        // code here
    std::stack<char> st;
    int pairsCount = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%'){
            st.push(ch);
        }
        else if(ch == ')'){
            bool hasOp = false;
            while(st.top() != '('){
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/' || top == '%'){
                    hasOp = true;
                }
                st.pop();
            }
            st.pop();
            if(!hasOp) pairsCount++;
        }
    }
    if(pairsCount >= 1) return true;
    else return false;
    }
};

int main(){

    std::string str = "(a-(c)-d*((c)))";
    
    int count = countPairsOfRedundantBrackets(str);

    std::cout << "Pairs of redundant brackets in string " << str << " :" << count << "\n";

    return 0;
}