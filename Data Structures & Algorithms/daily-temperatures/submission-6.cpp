class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        stack<pair<int, int>> stk;
        vector<int> res(n, 0);

        for(int i = 0; i < n; i++){
            while(!stk.empty() && stk.top().second < temperatures[i]){
                int idx = stk.top().first;
                stk.pop();
                res[idx] = i - idx; 
            }

            stk.push({i, temperatures[i]});
        }

        return res;
    }
};
