class Solution {
public:
    int climbStairs(int n) {
        vector<int> arr(n+1, -1);
        return helper(n, arr);
    }

    int helper(int n, vector<int>& arr){
        if(n <= 2) return n;

        if(arr[n] != -1){
            return arr[n];
        }

        arr[n] = helper(n-1, arr) + helper(n-2, arr);
        return arr[n];
    }
};
