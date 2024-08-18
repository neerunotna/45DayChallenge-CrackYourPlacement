//Leetcode-11
class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int i = 0, j = height.size() - 1;
        int area = 0;
        while(i<j){
            int mini = min(height[i],height[j]);
            area = mini*(j-i);
            res = max(res,area);
            while (i < j && height[i] <= mini) i++;
            while (i < j && height[j] <= mini) j--;  
        }
        return res;
    }
};