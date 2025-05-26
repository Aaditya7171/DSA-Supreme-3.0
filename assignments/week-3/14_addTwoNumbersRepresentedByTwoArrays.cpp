class Solution {
    public:
      string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
          // Complete the function
          int c = 0;
          string ans;
          int i = arr1.size() - 1;
          int j = arr2.size() - 1;
          
          while(i >= 0 && j >= 0){
              int x = arr1[i] + arr2[j] + c;
              int digit = x % 10;
              ans.push_back(digit + '0');
              c = x / 10;
              i--, j--;
          }
          
          while(i >= 0){
              int x = arr1[i] + 0 + c;
              int digit = x % 10;
              ans.push_back(digit + '0');
              c = x / 10;
              i--;
          }
          
          while(j >= 0){
              int x = 0 + arr2[j] + c;
              int digit = x % 10;
              ans.push_back(digit + '0');
              c = x / 10;
              j--;
          }
          
          if(c){
              ans.push_back(c + '0');
          }
          while(ans[ans.size() - 1] == '0'){
              ans.pop_back();
          }
          reverse(ans.begin(), ans.end());
          return ans;
      }
  };