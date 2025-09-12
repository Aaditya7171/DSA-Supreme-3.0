class Solution {
public:
    bool doesAliceWin(string s) {
        // Alice wins if there's at least one vowel
        string vowels = "aeiou";
        for(char c : s){
            if(vowels.find(c) != string::npos){
                return true;
            }
        }
        return false;
    }
};