class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;
        unordered_map<int, int> freq;

        for(int num : nums){
            freq[num]++;
            mp[freq[num]].push_back(num);
        }

        for(auto x : mp){
            if(k == x.second.size()){
                return x.second;
            }
        }
        return {};
    }
};
