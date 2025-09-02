class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freqMap[10] = {0};
        int temp = n;
        if(temp == 0) freqMap[0] = 1;
        while(temp > 0){
            freqMap[temp % 10]++;
            temp /= 10;
        }
        int minFreq = INT_MAX, res = 0;
        for(int z = 0; z <= 9; z++){
            if(freqMap[z] != 0 && freqMap[z] < minFreq){
                minFreq = freqMap[z];
                res = z;
            }
        }
        return res;
    }
};