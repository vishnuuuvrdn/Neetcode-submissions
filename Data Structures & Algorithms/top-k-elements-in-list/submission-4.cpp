class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;
        unordered_map<int, int> freq;
        for(int i : nums){
            freq[i]++;
            mp[freq[i]].push_back(i);
        }

        for(auto x : mp){
            if(x.second.size() == k){
                return x.second;
            }
        }

        return {};
    }
};
