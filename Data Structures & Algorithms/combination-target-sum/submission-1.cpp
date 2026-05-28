class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> arr;
        helper(nums, res, arr, target, 0, 0);
        return res;
    }

    void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& arr, int target, int sum, int idx){
        if(sum == target){
            res.push_back(arr);
            return;
        }

        if(sum > target){
            return;
        }

        for(int i = idx; i < nums.size(); i++){
            arr.push_back(nums[i]);
            helper(nums, res, arr, target, sum + nums[i], i);

            arr.pop_back();
        }
    }
};
