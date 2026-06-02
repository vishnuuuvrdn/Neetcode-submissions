class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> arr;
        helper(res, arr, n, k, 1);

        return res;
    }

    void helper(vector<vector<int>>& res, vector<int>& arr, int n , int k, int idx){
        if(arr.size() == k){
            res.push_back(arr);
            return;
        }

        for(int i = idx; i <= n; i++){
            arr.push_back(i);
            helper(res, arr, n, k, i+1);
            arr.pop_back();
        }
    }
};