class MinStack {
private:
    vector<int> minStack;
public:
    MinStack() {
        minStack = vector<int>();
    }
    
    void push(int val) {
        minStack.push_back(val);
    }
    
    void pop() {
        minStack.pop_back();
    }
    
    int top() {
        int n = minStack.size();
        return minStack[n-1];
    }
    
    int getMin() {
        int mini = INT_MAX;
        for(int i = 0; i < minStack.size(); i++){
            mini = min(mini, minStack[i]);
        }

        return mini;
    }
};
