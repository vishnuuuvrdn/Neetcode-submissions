class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int element = 0;

        for(int num : nums){
            if(cnt == 0){
                element = num;
            }

            if(element == num){
                cnt++;
            }else{
                cnt--;
            }
        }

        return element;
    }
};