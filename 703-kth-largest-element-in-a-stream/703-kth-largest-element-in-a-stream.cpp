class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;  //minheap
    int gk;
    KthLargest(int k, vector<int>& nums) {
        gk=k;
        for(auto x:nums)
        {
            if(pq.size()<k)
            {
                pq.push(x);
            }
            else if(pq.size()==k && pq.top()<=x)
            {
                pq.push(x);
            }
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        if(pq.size()<gk)
        {
            pq.push(val);
        }
        else if(pq.size()==gk && val>=pq.top())
        {
            pq.push(val);
        }
        if(pq.size()>gk) 
        {
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */