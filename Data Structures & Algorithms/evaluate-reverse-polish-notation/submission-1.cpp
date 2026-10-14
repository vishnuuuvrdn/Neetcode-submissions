class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s : tokens){
            if(s == "+"){
                int last = st.top();
                st.pop();

                int res = st.top() + last;
                st.pop();
                st.push(res);
                continue;
            }else if(s == "-"){
                int last = st.top();
                st.pop();

                int res = st.top() - last;
                st.pop();
                st.push(res);
                continue;
            }else if(s == "*"){
                int last = st.top();
                st.pop();

                int res = st.top() * last;
                st.pop();
                st.push(res);
                continue;
            }else if(s == "/"){
                int last = st.top();
                st.pop();

                int res = st.top() / last;
                st.pop();
                st.push(res);
                continue;
            }
            
            int el = stoi(s);
            st.push(el);
        }

        return st.top();
    }
};
