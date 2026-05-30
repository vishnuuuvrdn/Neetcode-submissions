class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        helper(nums, arr, res, 0);
        return res;
    }
    void helper(vector<int>& nums, vector<int>& arr, vector<vector<int>>& res, int idx){
        res.push_back(arr);
        
        for(int i = idx; i < nums.size(); i++){
            arr.push_back(nums[i]);
            helper(nums, arr, res, i+1);
            arr.pop_back();
        }
    }
};
