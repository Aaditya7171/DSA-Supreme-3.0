class Spreadsheet {
public:
    unordered_map<string, int> mp;
    int getOpVal(string s){
        if(isalpha(s[0]))
            return mp.count(s) ? mp[s] : 0;
        return stoi(s);
    }
    Spreadsheet(int rows) {
        // Constructor empty because rows unused-> map handles all cell storage
    }
    
    void setCell(string cell, int value) {
        mp[cell] = value;
    }
    
    void resetCell(string cell) {
        mp[cell] = 0;
    }
    
    int getValue(string formula) {
        formula = formula.substr(1); // remove '=
        int plusPos = formula.find('+'); // will find the index of the '+'
        // now split the string by '+'
        string left = formula.substr(0, plusPos);
        string right = formula.substr(plusPos+1);
        return getOpVal(left) + getOpVal(right);
    }
};
