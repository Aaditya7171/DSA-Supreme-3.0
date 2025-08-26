class Solution {
public:
    string reverseOnlyLetters(string s) {
        // //Approach 1---> Temp Array (Using O(n)- Extra Space)
        // vector<char> temp;
        // for(char c : s){
        //     if(isalpha(c)) temp.push_back(c);
        // }
        // string res = s;
        // int j = temp.size() - 1;
        // for(int i = 0; i < s.size(); i++){
        //     if(isalpha(s[i])){
        //         res[i] = temp[j--];
        //     }
        // }
        // return res;

        //Approach 2---> Two Pointer(O(1)-->space, in place reverse) 
        int l = 0, h = s.size() - 1;
        while(l < h){
            if(isalpha(s[l]) && isalpha(s[h]))
                swap(s[l], s[h]), l++, h--;
            else if(!isalpha(s[l])) l++;
            else h--;
        }
        return s;
    }
};