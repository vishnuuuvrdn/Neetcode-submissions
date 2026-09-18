class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";
        for(string s : strs){
            res += s;
            res.push_back('`');
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        for(int i = 0; i < s.size(); i++){
            string str = "";
            while(s[i] != '`'){
                str.push_back(s[i]);
                i++;
            }

            res.push_back(str);
        }

        return res;
    }
};
