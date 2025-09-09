class Solution {
public:
    void reverseSt(stack<string>& s, string& ans){
        if(s.empty()) return;
        string minPath = s.top(); s.pop();
        reverseSt(s, ans);
        ans += minPath;
    }
    string simplifyPath(string path) {
        stack<string> st;
        int i = 0;
        while( i < path.size()){
            int start = i, end = i + 1;
            while(end < path.size() && path[end] != '/'){
                ++end;
            }
            string minPath = path.substr(start, end - start);
            i = end;
            if(minPath == "/" || minPath == "/.") continue;
            if(minPath != "/..") st.push(minPath);
            else if(!st.empty()) st.pop();
        }
        string ans = st.empty() ? "/" : "";
        reverseSt(st, ans);
        return ans;
    }
};