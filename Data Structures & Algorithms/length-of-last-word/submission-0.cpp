class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        while(s[n-1] == ' '){
            n -= 1;
        }

        int cnt = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == ' ') break;
            cnt++;
        }

        return cnt;
    }
};