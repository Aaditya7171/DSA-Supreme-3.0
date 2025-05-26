class Solution {
    public:
      // Function to find common elements in three arrays.
      vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                                 vector<int> &arr3) {
          // Code Here
          // set<int> res;
          vector<int> ans;
          
          // auto it1 = unique(arr1.begin(), arr1.end());
          // arr1.erase(it1, arr1.end());
          // auto it2 = unique(arr2.begin(), arr2.end());
          // arr2.erase(it2, arr2.end());
          // auto it3 = unique(arr3.begin(), arr3.end());
          // arr3.erase(it3, arr3.end());
          
          auto dedup= [] (vector<int> &v){
              v.erase(unique(v.begin(), v.end()), v.end());
          };
          dedup(arr1); dedup(arr2); dedup(arr3);

          int i, j, k;
          i =j = k = 0;
          while(i < arr1.size() && j < arr2.size() && k < arr3.size()){
              if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
                  ans.push_back(arr1[i]);
                  i++, j++, k++;
              } else if (arr1[i] < arr2[j]) {
                   i++;
              } else if(arr2[j] < arr3[k]) {
                   j++;
              } else {
                  k++;
              }
          }
          // for(auto i : res){
          //     ans.push_back(i);
          // }
          return ans;
      }
  };