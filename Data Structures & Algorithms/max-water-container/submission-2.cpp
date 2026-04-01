class Solution {
public:
    int maxArea(vector<int>& heights) {
        int water = 0;
        int l = 0;
        int r = heights.size() - 1;

        while (l < r) {
            int width = r - l;
            int len = min(heights[l], heights[r]);
            water = max(water, width*len);

            if (heights[l] <= heights[r]) l++;
            else r--;
        }
        return water;
    }
};
