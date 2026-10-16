class StockSpanner {
public:
    stack<pair<int, int>> stk;

    int next(int price) {
        int res = 1;
        while(!stk.empty() && stk.top().second <= price){
            res += stk.top().first;
            stk.pop();
        }

        stk.push({res, price});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */