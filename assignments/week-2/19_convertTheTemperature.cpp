#include<vector>

class Solution {
public:
    std::vector<double> convertTemperature(double celsius) {

        std::vector<double> ans;
        double k = celsius + 273.15;
        double f = celsius * 1.80 + 32;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};
