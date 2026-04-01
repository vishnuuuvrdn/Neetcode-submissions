class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        st.push("Main");

        for(const string& s : logs){
            if(s == "../" && st.top() != "Main"){
                st.pop();
            }

            if(s != "../" && s != "./"){
                st.push(s);
            }
        }
        return st.size() - 1;
    }
};