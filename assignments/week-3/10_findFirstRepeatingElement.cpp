class Solution {
    public:
      int firstRepeated(vector<int> &arr) {
          // code here
          unordered_map<int, int> fMap;
          for(int i : arr){
              fMap[i]++;
          }
          for(int i = 0; i < arr.size(); i++){
              if(fMap[arr[i]] > 1){
                  return i + 1;
              }
          }
          return -1;
      }
  };