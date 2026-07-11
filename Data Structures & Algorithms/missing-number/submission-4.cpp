class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            expectedSum += i;
            sum += nums[i];
        }

        return expectedSum - sum;
    }
};
