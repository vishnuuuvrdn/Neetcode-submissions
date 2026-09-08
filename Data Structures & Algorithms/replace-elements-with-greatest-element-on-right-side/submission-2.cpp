class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int maxi = INT_MIN;
            for(int j = i+1; j < n; j++){
                maxi = max(maxi, nums[j]);
            }

            nums[i] = maxi;
        }

        nums[n-1] = -1;

        return nums;
    }
};