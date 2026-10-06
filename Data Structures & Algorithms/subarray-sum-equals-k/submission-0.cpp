class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int res = 0;
        int currSum = 0;
        mp[0] = 1;
        
        for(int num : nums){
            currSum += num;
            int diff = currSum - k;
            res += mp[diff];
            mp[currSum]++;
        }

        return res;
    }
};