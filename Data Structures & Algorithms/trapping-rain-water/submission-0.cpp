class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n);
        int maxi = 0;

        for(int i = 0; i < n; i++){
            leftMax[i] = maxi;
            maxi = max(maxi, height[i]);
        }


        vector<int> rightMax(n);
        maxi = 0;
        for(int i = n-1; i >= 0; i--){
            rightMax[i] = maxi;
            maxi = max(maxi, height[i]);
        }

        int res = 0;
        for(int i = 0; i < n; i++){
            int ans = min(leftMax[i], rightMax[i]) - height[i];
            if(ans < 0) ans = 0;
        
            res += ans;
        }

        return res;
    }
};
