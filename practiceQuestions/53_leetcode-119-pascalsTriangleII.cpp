#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i = 0; i <= rowIndex; i++){
            vector<int> tempAns;
            long long num = 1;
            for(int j = 0; j <= i; j++){
                tempAns.push_back(num);
                num = num * (i - j) / (j + 1);
            }
            ans.push_back(tempAns);
        }
        return ans[rowIndex];
    }
};