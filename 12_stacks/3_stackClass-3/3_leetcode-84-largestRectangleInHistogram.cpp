#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<climits>

using namespace std;

class Solution {
public:
     
    void nextSmallerElement(std::vector<int> &heights, std::vector<int> &nextAns){
        stack<int> st;
        st.push(-1);
        int n = heights.size();

        for(int i = n - 1; i >= 0; i--){
            int elem = heights[i];
            while(st.top() != -1 && heights[st.top()] >= elem){
                st.pop();
            }
            //if we reached here that means either -1 or any smaller element is at the top of the stack
            nextAns.push_back(st.top());
            st.push(i);
        } 
    }

    void prevSmallerElement(std::vector<int> &heights, std::vector<int> &prevAns){
        stack<int> st;
        st.push(-1);
        int n = heights.size();

        for(int i = 0; i < n; i++){
            int elem = heights[i];
            while(st.top() != -1 && heights[st.top()] >= elem){
                st.pop();
            }
            prevAns.push_back(st.top());
            st.push(i);
        } 
    }

    int largestRectangleArea(vector<int>& heights) {
        std::vector<int> nextAns;
        std::vector<int> prevAns;

        nextSmallerElement(heights, nextAns);
        for(int i = 0; i < nextAns.size(); i++){
            if(nextAns[i] == -1){
                nextAns[i] = nextAns.size();
            }
        }
        reverse(nextAns.begin(), nextAns.end());
        prevSmallerElement(heights, prevAns);

        int maxArea = INT_MIN;
        for(int i = 0; i < nextAns.size(); i++){
            int width = nextAns[i] - prevAns[i] - 1;
            int height = heights[i];
            int currArea = width * height;
            maxArea = max(maxArea, currArea);
        }

        return maxArea;
    }
    //T.C. O(n) // 5 passes
};

int main(){
    
    std::vector<int> heights = {2,1,5,6,2,3};
    Solution sol;
    int maxArea = sol.largestRectangleArea(heights);

    std::cout << maxArea;

    return 0;
}
