class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(char c : text){
            mp[c]++;
        }

        int mini = INT_MAX;
        mini = min(mp['b'], mini);
        mini = min(mp['a'], mini);
        mini = min(mp['l']/2, mini);
        mini = min(mp['o']/2, mini);
        mini = min(mp['n'], mini);

        return mini;
    }
};