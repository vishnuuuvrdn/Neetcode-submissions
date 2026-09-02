class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = INT_MIN;
        int ones = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                res = max(ones, res);
                ones = 0;
            }else{
                ones++;
            }
        }

        res = max(res, ones);

        return res;
    }
};