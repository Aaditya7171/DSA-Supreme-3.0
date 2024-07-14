#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution {
public:

    bool canKokoFinishBananasWithKSpeed(vector<int>&piles, int h, int k){
        long long int totalHoursTakenByKokoToFinishAllBananas = 0;
        for(int i = 0; i < piles.size(); i++){
            totalHoursTakenByKokoToFinishAllBananas += ceil(piles[i] / (double)k);
        }
        return totalHoursTakenByKokoToFinishAllBananas <= h;//will return true or false
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        auto it = max_element(piles.begin(), piles.end());//returns itrator
        int e = *it;
        int ans = 0;
          
        while(s <= e){
            int mid = s + (e - s) / 2;
            int k = mid; 
            if(canKokoFinishBananasWithKSpeed(piles, h, k)){
                ans = k;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};
 //t.c. -- > O(log(maxPiles)) * O(n) -- > O(n*log(maxPiles))