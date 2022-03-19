class FreqStack {
public:
    unordered_map<int,int>mp;
    unordered_map<int,stack<int>>st;
    int max_freq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        max_freq=max(max_freq,mp[val]);
        st[mp[val]].push(val);
    }
    
    int pop() {
        int top_freq=st[max_freq].top();
        st[max_freq].pop();
        mp[top_freq]--;
        if(st[max_freq].size()==0)
            max_freq--;
     return top_freq;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */