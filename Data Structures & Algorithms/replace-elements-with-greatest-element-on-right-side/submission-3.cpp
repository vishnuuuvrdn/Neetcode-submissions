class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n = nums.size();

        int idx = 0;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){

            if(i >= idx){
                maxi = INT_MIN;
                for(int j = i+1; j < n; j++){
                    if(nums[j] > maxi){
                        idx = j;
                        maxi = nums[j];
                    }
                }
            }

            nums[i] = maxi;
        }

        nums[n-1] = -1;

        return nums;
    }
};