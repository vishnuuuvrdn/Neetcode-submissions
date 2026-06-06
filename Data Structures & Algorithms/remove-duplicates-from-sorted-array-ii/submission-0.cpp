class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int cnt = 1;
        while(i < nums.size()){
            if(i > 0 && nums[i] == nums[i-1]){
                cnt++;
            }else{
                cnt = 1;
            }

            if(cnt > 2 && nums[i] == nums[i-1]){
                nums.erase(nums.begin()+i);
            }else{
                i++;
            }
        }

        return nums.size();
    }
};