class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.'){
                address.replace(i, 1, "[.]");
                i+=2;
            }
        }
        return address;
    }
};