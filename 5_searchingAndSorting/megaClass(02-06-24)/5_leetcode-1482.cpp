#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    
    bool canWeMakeMBouquetsWithDDays(vector<int> &bloomDay, int m, int k, int D){
        int counter = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            //check whether the ith flower is bloomed or not
            if(bloomDay[i] <= D){
                //flower bloomed
                counter++;
            }
            if(counter == k){
                //we can make a bouquet now
                m--;
                counter = 0;
                if(m == 0) break;//m bouquets made so exit
            }
            if(bloomDay[i] > D){
                counter = 0;
            }

        }
        return m == 0;//were we able to make m bouquets
    }

    int minDays(vector<int> &bloomDay, int m, int k) {
         
        long long int requirement = (long long int)m * (long long int)k;
        if(bloomDay.size() < requirement) return -1;
        
        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = 0;


        while(start <= end){
            int mid = (start + end) >> 1;
            int day = mid;
            if(canWeMakeMBouquetsWithDDays(bloomDay, m, k, day)){
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};