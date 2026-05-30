class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        helper(nums, res, arr, 0);
        
        return res;
    }

    void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& arr, int start){
        res.push_back(arr);

        for(int i = start; i< nums.size(); i++){
            if(i > start && nums[i] == nums[i-1]){
                continue;
            }

            arr.push_back(nums[i]);
            helper(nums, res, arr, i+1);
            arr.pop_back();
        }
    }
};
