class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        unordered_map<char,int> freqMap;
        string ans = "";
        queue<char> q;
        for(char c : s){
            freqMap[c]++;
            q.push(c); // maintain initial state
            
            while(!q.empty()){
                // check whether the first element is answer or not
                if(freqMap[q.front()] == 1){
                    ans.push_back(q.front());
                    break;
                 }
                else{
                    // front element is duplicate element
                    q.pop();
                }
            }
            // if all were deplicates then queue will be empty otherwise not
            if(q.empty()) ans.push_back('#');
        }
        return ans;
    }
};