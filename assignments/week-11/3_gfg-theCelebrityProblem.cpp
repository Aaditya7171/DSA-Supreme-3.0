class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        // Optimized Solution O(n)
        stack<int>st;
        int n = mat.size();
        // step 1: push all persons into stack
        for(int i = 0; i < n; i++){
            st.push(i);
        }
        // step 2: find a person that might be a celebrity(discard if not-> discard method)
        while(st.size() != 1){
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            if(mat[a][b]){
                // a is not a celebrity-> b might be
                st.push(b);
            } else {
                // b is not a celebrity-> a might be
                st.push(a);
            }
        }
        // step 3: check if the single person is a celebrity
        int mightBeCeleb = st.top(); st.pop();
        // celeb should not know anyone-> all rows 0
        for(int i = 0; i < n; i++){
            if(mat[mightBeCeleb][i] != 0 && i != mightBeCeleb){
                return -1;
            }
        }
        // everyone should know celeb- all cols 1
        for(int i = 0; i < n; i++){
            if(mat[i][mightBeCeleb] == 0 && i != mightBeCeleb){
                // all the column expect the diagonal one should not be 0
                return -1;
            }
        }
        return mightBeCeleb;
        
        //Bruteforce Approach-O(n^2)
        /*
        int n = mat.size();
        for(int i = 0; i < n; i++){
            bool rowCheck = true;
            bool colCheck = true;
            // Check row i: person i should not know anyone (except themselves)
            for(int j = 0; j < n; j++){
                if(j != i && mat[i][j] == 1){
                    rowCheck = false;
                    break;
                }
            }
            // Check column i: everyone should know person i (except themselves)
            for(int k = 0; k < n; k++){
                if(k != i && mat[k][i] == 0){
                    colCheck = false;
                    break;
                }
            }
            if(rowCheck && colCheck) return i;
        }
        return -1;
        */
    }
};