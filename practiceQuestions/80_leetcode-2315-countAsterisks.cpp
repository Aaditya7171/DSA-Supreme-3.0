class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool bars = false;
        for(char c : s){
            if(c == '|') bars = !bars;
            else if( c == '*' && !bars){
                count++;
            }
        }
        return count;
    }
};