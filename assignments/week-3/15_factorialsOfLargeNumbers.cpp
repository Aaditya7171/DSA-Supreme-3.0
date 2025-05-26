class Solution {
    public:
      vector<int> factorial(int n) {
          // code here
          vector<int> ans;
          ans.push_back(1);
          int c = 0;
          for(int i = 2; i <= n; i++){
              for(int j = 0; j < ans.size(); j++){
                  int x = ans[j] * i + c;
                  ans[j] = x % 10;
                  c = x / 10;
              }
              while(c) {
                  ans.push_back(c % 10);
                  c /= 10;
              }
              c = 0;
          }
          reverse(ans.begin(), ans.end());
          return ans;
      }
  };