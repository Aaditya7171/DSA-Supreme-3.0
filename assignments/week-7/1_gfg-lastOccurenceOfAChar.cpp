class Solution {
  public:
    
    void lastOcc(string &s, char& x, int& ans, int i){
        if(i >= s.size()) return;
        if(s[i] == x){
            ans = i;
        }
        lastOcc(s, x, ans, i+1);
    }

    int LastIndex(string s, char p) {
        // complete the function here
        // int index = -1;
        // for(int i = 0; i < s.size(); ++i){
        //     if(s[i] == p){
        //         index = i;
        //     }
        // }
        // return index;
        
        // const char* ans = strrchr(s.c_str(), p);
        // if(ans == nullptr) return -1;
        // return static_cast<int>(ans - s.c_str());
        
        int ans = -1, i = 0;
        lastOcc(s, p, ans, i);
        return ans;
    }
};