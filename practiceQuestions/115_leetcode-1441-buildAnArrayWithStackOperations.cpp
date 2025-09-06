class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> op;
        int index = 0;
        for(int i = 1; i <= n && index<target.size(); i++){
            op.push_back("Push");
            if(i == target[index]) index++;
            else op.push_back("Pop");
        }
        return op;
    }
};