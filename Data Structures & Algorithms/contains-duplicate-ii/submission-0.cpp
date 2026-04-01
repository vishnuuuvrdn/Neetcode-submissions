class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0; i<nums.size(); i++){
            for(int c =1; c <= k && (i+c) < nums.size(); c++){
                int j = i+c;
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};