class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxArea = 0;
        while(left < right){
            int currArea = min(height[left], height[right]) * (right - left);
            maxArea = max(currArea, maxArea);

            if(height[left] < height[right]){
                left++;
            }
            else {
                right--;
            }
        }
        return maxArea;
    }
};