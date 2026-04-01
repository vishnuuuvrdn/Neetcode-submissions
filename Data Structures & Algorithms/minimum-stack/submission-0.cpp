class MinStack {
private:
    stack<int> st;
    stack<int> minST;
public:
    MinStack() {}
    
    void push(int val) {
        if(minST.empty()){
            minST.push(val);
            st.push(val);
        }
        else{
            st.push(val);
            minST.push(min(val, minST.top()));
        }
    }
    
    void pop() {
        st.pop();
        minST.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minST.top();
    }
};
