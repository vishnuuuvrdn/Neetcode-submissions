class Solution {
public:
    int arrangeCoins(int n) {
        if(n <= 1) return n;
        int res = 0;
        for(int i = 1; i <= n; i++){
            if(n > i) res++;

            n -= i;
        }

        return res;
    }
};