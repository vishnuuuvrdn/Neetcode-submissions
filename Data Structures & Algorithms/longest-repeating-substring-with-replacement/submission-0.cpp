class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int left = 0;
        int maxFreq = 0;
        int result = 0;

        for (int right = 0; right < s.size(); right++) {
            mp[s[right]]++;
            maxFreq = max(maxFreq, mp[s[right]]);

            int windowSize = right - left + 1;
            bool isInvalid = (windowSize - maxFreq) > k;

            if (isInvalid) {
                mp[s[left]]--;
                left++;
            }

            result = max(result, right - left + 1);
        }

        return result;
    }
};