class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        vector<bool> used(nums.size(), false);
        helper(nums, res, arr, used);

        return res;
    }

    void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& arr, vector<bool>& used){
        if(arr.size() == nums.size()){
            res.push_back(arr);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(used[i] == false){
                arr.push_back(nums[i]);
                used[i] = true;
                helper(nums, res, arr, used);
                arr.pop_back();
                used[i] = false;
            }
        }
    }
};
