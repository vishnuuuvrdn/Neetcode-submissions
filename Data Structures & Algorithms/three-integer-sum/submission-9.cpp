class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            int target = -nums[i];
            unordered_map<int, int> mp;

            for(int j = i+1; j < nums.size(); j++){

                int diff = target - nums[j];
                if(mp.find(diff) != mp.end()){
                    res.push_back({nums[i], nums[j], diff});
                }

                mp[nums[j]]++;
            }
        }

        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());

        return res;
    }
};
