class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st; // stores all the steroids that are left after collision
        for(auto ast : asteroids) {
            bool destroy = false; // initially nothing will be destroyed
            if(ast > 0) {
                st.push(ast);
            }
            else {
                if(st.empty() || (st.top() < 0 && ast < 0)){
                    // if stack is empty and ast is negative, also then we need to push it along with (-ve, -ve)
                    st.push(ast);
                }
                else{
                    // st.top()->is positive, and ast is negative(collision would happen) 
                    while(!st.empty() && st.top() > 0){
                        // pop until st.top() is positive
                        if(abs(ast) == st.top()){
                           // same weight
                           destroy = true;
                           st.pop(); 
                           break;
                        }
                        else if(abs(ast) > st.top()){
                            // heavy asteroid found, pop lighter one
                            st.pop();
                        }
                        else {
                            // asteroid is smaller than st.top()
                            destroy = true;
                            break; // larger one would remain in same position      
                        }
                    }
                    if(!destroy) st.push(ast);
                }
            }
        }
        vector<int> ans(st.size());
        for(int i = st.size() - 1; i >= 0; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};