class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());

        helper(res, nums, arr, used);

        return res;
    }

    void helper(vector<vector<int>>& res, vector<int>& nums, vector<int>& arr, vector<bool>& used){
        if(arr.size() == nums.size()){
            res.push_back(arr);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1] && !used[i-1]){
                continue;
            }

            if(!used[i]){
                arr.push_back(nums[i]);
                used[i] = true;
                helper(res, nums, arr, used);
                arr.pop_back();
                used[i] = false;
            }
        }
    }
};