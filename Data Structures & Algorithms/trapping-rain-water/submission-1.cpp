class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int trappedWater = 0;

        int leftMax = height[0];
        int rightMax = height[n-1];
        int l = 0;
        int r = n-1;

        while(l <= r){
            if(leftMax < rightMax){
                int water = leftMax - height[l];
                if(water < 0) water = 0;
                trappedWater += water;
                leftMax = max(leftMax, height[l]);
                l++;
            }else{
                int water = rightMax - height[r];
                if(water < 0) water = 0;
                trappedWater += water;
                rightMax = max(rightMax, height[r]);
                r--;
            }
        }

        return trappedWater;
    }
};
