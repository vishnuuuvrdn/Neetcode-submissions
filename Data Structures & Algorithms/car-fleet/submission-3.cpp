class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();

        vector<pair<int, int>> mp;
        for(int i = 0; i < n; i++){
            mp.push_back({position[i] , speed[i]});
        }

        sort(mp.begin(), mp.end());
        stack<double> stk;
        for(int i = n-1; i >= 0; i--){
            double time = (double)(target - mp[i].first) / mp[i].second;

            if (stk.empty() || time > stk.top()) {
                stk.push(time);
            }
        }

        return stk.size();
    }
};
