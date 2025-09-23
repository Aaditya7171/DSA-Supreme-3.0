class Solution {
public:
    long long smallestNumber(long long num) {
        long long ans =0;
        if(num<0){
            string s = to_string(num);
            sort(s.begin(), s.end(), greater<>());
            return -stoll(s);
        }
        if(num == 0) return 0;
        if(num > 0){
            string s = to_string(num);
            sort(s.begin(), s.end());
            int l=0, h = 1;
            while(s[0]=='0'){
                if(s[h]!='0'){
                    swap(s[l++], s[h++]);
                }
                else h++;
            }
            num = stoll(s);
        }
        return num;
    }
};