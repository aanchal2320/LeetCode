class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        if (val < curr_min) {
            s.push({val, val});
            curr_min = val;
        }
        else s.push({val, curr_min});
    }
    
    void pop() {
        s.pop();
        curr_min = s.empty() ? INT_MAX : s.top().second;
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return curr_min;
    }
    
private:
    stack<pair<int, int>> s;
    int curr_min = INT_MAX;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */