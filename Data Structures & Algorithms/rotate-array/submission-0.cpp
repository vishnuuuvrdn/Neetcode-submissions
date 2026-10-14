class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i < k; i++){
            int lastEl = nums[n-1];
            for(int j = 0; j < n; j++){
                int temp = nums[j];
                nums[j] = lastEl;
                lastEl = temp;
            }
        }
    }
};