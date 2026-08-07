class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currMin = 0, minSum = nums[0];
        int currMax = 0, maxSum = nums[0];
        int total = 0;

        for(int i : nums){
            currMin = min(currMin, 0);
            currMin += i;
            minSum = min(minSum, currMin);

            currMax = max(currMax, 0);
            currMax += i;
            maxSum = max(maxSum, currMax);

            total += i;
        }

        if(maxSum < 0) return maxSum;

        return max(maxSum, total-minSum);
    }
};