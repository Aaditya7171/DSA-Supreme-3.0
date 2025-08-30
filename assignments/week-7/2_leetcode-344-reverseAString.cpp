class Solution {
public:
    void reverse(vector<char>&  s, int l, int r){
        if(l >= r) return;
        swap(s[l], s[r]);
        reverse(s, l+1, r-1);
    }
    void reverseString(vector<char>& s) {
        // int l = 0, h = s.size()-1;
        // while(l < h){
        //     swap(s[l++], s[h--]);
        // }
        reverse(s, 0, s.size() - 1);
    }
};
//T.C. --> O(N/2 + 1)--> O(N)
//S.C. --> O(N/2 + 1) --> O(N)