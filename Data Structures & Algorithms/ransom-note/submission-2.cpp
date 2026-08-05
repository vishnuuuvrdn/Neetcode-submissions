class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(char c : magazine){
            mp[c]++;
        }

        for(char c : ransomNote){
            if(!mp.count(c)){
                return false;
            }

            if(mp[c] > 1){
                mp[c]--;
            }else{
                mp.erase(c);
            }
        }

        return true;
    }
};