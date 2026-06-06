class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = 0;

        while(i < chars.size()){
            int cnt = 0;
            char curr = chars[i];

            while(i < chars.size() && curr == chars[i]){
                i++;
                cnt++;
            }

            chars[j++] = curr;

            if(cnt > 1){
                string strCnt = to_string(cnt);
                for(char c : strCnt){
                    chars[j++] = c;
                }
            }
        }
        return j;
    }
};