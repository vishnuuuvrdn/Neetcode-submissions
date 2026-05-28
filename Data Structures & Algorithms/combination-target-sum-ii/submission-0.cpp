class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res;
        vector<int> arr;
        helper(candidates, res, arr, target, 0, 0);

        return res;
    }

    void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& arr, int t, int sum, int idx){
        if(sum == t){
            res.push_back(arr);
            return;
        }

        if(sum > t) return;

        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i-1]) continue;

            arr.push_back(nums[i]);
            helper(nums, res, arr, t, sum + nums[i], i+1);
            arr.pop_back();
        }
    }
};
