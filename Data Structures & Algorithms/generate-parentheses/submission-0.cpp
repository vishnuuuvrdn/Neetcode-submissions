class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        helper(res, s, n, 0, 0);

        return res;
    }

    void helper(vector<string>& res, string s, int n, int open, int close){
        if(s.length() == n*2){
            res.push_back(s);
            return;
        }

        if(open < n){
            s.push_back('(');

            helper(res, s, n, open+1, close);

            s.pop_back();
        }

        if(close < open){
            s.push_back(')');

            helper(res, s, n, open, close+1);

            s.pop_back();
        }
    }
};
