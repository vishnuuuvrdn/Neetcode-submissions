class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;

        int stepOne = 1;
        int stepTwo = 2;
        int currStep = 0;

        for(int i = 3; i <= n; i++){
            currStep = stepOne + stepTwo;

            stepOne = stepTwo;
            stepTwo = currStep;
        }

        return currStep;
    }
};
